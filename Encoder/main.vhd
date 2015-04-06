library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.globals.all;
use ieee.math_real.all;
use ieee.numeric_std.all;
use STD.textio.all;
  

entity main is
	port (
		clk : in std_logic;
		rst : in std_logic;
		result : out std_logic--out std_logic_vector(0 to (N_large * 5))--code_stream
	);
end entity main;

architecture My_Main of main is

	-- signals that need to be global
	signal current_state : main_state; -- used for current state
	signal next_state : main_state; -- used to indicate next state transition
	signal vq_index : int_vq_index; -- the vq index value from the image 
	signal list_index : int_list_index; -- the latest inserted vq index's position in the list
	signal elements : vq_index_list; -- the list of vq indicies to be manipulated
	-- signal to_stream : std_logic; -- to indicate if to send the data to stream
	 

	
	
	--signal stream: std_logic_vector(0 to (N_large * 5));
--	variable counter : counter_int;
--	signal temp_secret : std_logic_vector(3 downto 0);
--	variable secret_index : codestream_index;
--	variable temp_secret_index: codestream_index;
--	variable substream_size_val : substream_size;
	--signal image_data_file : image_file is in "image.txt";
	--signal secret_data_file : secret_file;
begin

	-- read in the input file for the image
	-- read in the secret message
	
	-- instantiate entity for list
	list_unit: entity work.list(Behavioral)
		port map(elements => elements, 
					to_insert => vq_index,
					location => list_index);
	
	setup_process: process(clk, rst)
	begin
		if rst = '1' then
			report "starting to set up";
			current_state <= SETUP;
		elsif rising_edge(clk) then
			report "Transitioning to another state";
			current_state <= next_state;
		end if; 
	end process;
	
	main_process: process(current_state)
	
	-- variables to manage image state
	variable my_image_data : image_data;
	variable current_image_data_index : image_index;
	variable image_size : image_index;
	
	-- variables to manage secret state
	variable secret : std_logic_vector(0 to (N_large * 5));
	variable secret_index : codestream_index; -- current index of secret
	variable stream_limit : codestream_index;
	variable secret_size : codestream_index;
	
	-- variables to manage output stream state
	variable stream : std_logic_vector(0 to (N_large * 5));
	variable temp_secret : std_logic_vector(0 to (n_small - 1));
	variable stream_index : codestream_index; -- current index of codestream
	variable stream_slice_limit : codestream_index;
	variable stream_length : codestream_index;
	
	-- other helper variables
	variable min_num_bits : substream_size;
	variable zeroes_arr : std_logic_vector(0 to n_small);
	
	
	begin
		case current_state is
		when SETUP =>
			report "In setup";
			current_image_data_index := -1;
			image_size := -1;
			secret_index := -1;
			secret_size := -1;
			stream_index := -1;
			next_state <= READING_IMAGE;
		when READING_IMAGE =>
			report "Reading image";
			if endfile(img) then
				current_image_data_index := -1;
				next_state <= READING_SECRET;
			else
				current_image_data_index := current_image_data_index + 1;
				image_size := image_size + 1;
				read(img, my_image_data(current_image_data_index));
				next_state <= READING_IMAGE;
			end if;
		when READING_SECRET =>
			report "Reading secret";
			if endfile(in_secret) then
			   secret_index := -1;
				next_state <= START_ENCODING;
			else
				secret_index := secret_index + 1;
				secret_size := secret_size + 1;
				read(in_secret, secret(stream_index));
				next_state <= READING_SECRET;
			end if;
		when START_ENCODING =>
			-- has  to start at -1
			report "Starting to encode the data";
			current_image_data_index := current_image_data_index + 1;
			if current_image_data_index > image_size then
				next_state <= DONE;
			else
				vq_index <= my_image_data(current_image_data_index);
				if list_index = 0 then
					next_state <= INDEX_NOT_IN_LIST;
				else
					next_state <= INDEX_PRESENT_IN_LIST;
				end if;
			end if;
		when INDEX_NOT_IN_LIST => 
			stream_slice_limit := stream_index + n_small;
			stream_index := stream_index + 1;
			stream(stream_index to stream_slice_limit) := zeroes_arr(0  to (n_small  - 1));
			stream_length := stream_length + n_small;
			next_state <= START_ENCODING;
		when INDEX_PRESENT_IN_LIST => 
			secret_index := secret_index + 1;
			temp_secret(0 to (n_small - 1)) := secret(secret_index to (secret_index + n_small - 1));
			if temp_secret = "0000" then
				if list_index = 1 then
					next_state <= ALL_ZEROES_1;
				else
					next_state <= ALL_ZEROES_O;
				end if;
			else
				if list_index = 1 then
					next_state <= NOT_ALL_ZEROES_1;
				else
					next_state <= NOT_ALL_ZEROES_0;
				end if;
			end if;
		when ALL_ZEROES_1 =>
			stream_slice_limit := stream_index + (n_small + 2);
			stream_index := stream_index + 1;
			stream(stream_index to stream_slice_limit) := 
				temp_secret(0 to (n_small - 1)) & "11";
			next_state <= START_ENCODING;
		when NOT_ALL_ZEROES_1 =>
			stream_slice_limit := stream_index + (n_small + 1);
			stream_index := stream_index + 1;
			stream(stream_index to stream_slice_limit) :=
				temp_secret(0 to (n_small - 1)) & "1";
			next_state <= START_ENCODING;
		when ALL_ZEROES_O =>
			min_num_bits := get_substream_size(list_index);
			stream_slice_limit := stream_index + n_small + 2 * min_num_bits + 1;
			stream_index := stream_index + 1;
			if min_num_bits = 1 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"10" & std_logic_vector(to_unsigned(list_index, 1));
			elsif min_num_bits = 2 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"100" & std_logic_vector(to_unsigned(list_index, 2));
			elsif min_num_bits = 3 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"1000" & std_logic_vector(to_unsigned(list_index, 3));
			elsif min_num_bits = 4 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"10000" & std_logic_vector(to_unsigned(list_index, 4));
			else 
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"100000" & std_logic_vector(to_unsigned(list_index, 5));
			end if;
			stream_index := stream_slice_limit;
			next_state <= START_ENCODING;
		when NOT_ALL_ZEROES_0 =>
			min_num_bits := get_substream_size(list_index);
			stream_slice_limit := stream_index + n_small + 2 * min_num_bits;
			stream_index := stream_index + 1;
			if min_num_bits = 1 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"0" & std_logic_vector(to_unsigned(list_index, 1));
			elsif min_num_bits = 2 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"00" & std_logic_vector(to_unsigned(list_index, 2));
			elsif min_num_bits = 3 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"000" & std_logic_vector(to_unsigned(list_index, 3));
			elsif min_num_bits = 4 then
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"0000" & std_logic_vector(to_unsigned(list_index, 4));
			else 
				stream(stream_index to stream_slice_limit) := temp_secret(0 to (n_small - 1)) & 
					"00000" & std_logic_vector(to_unsigned(list_index, 5));
			end if;
			stream_index := stream_slice_limit;
			next_state <= START_ENCODING;
		when DONE =>
			result <= '1';
			-- write to output file here
			next_state <= STOP;
		when STOP =>
			next_state <= STOP;
		end case;
	end process;
	

end architecture My_Main;