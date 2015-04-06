library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.globals.all;
use ieee.math_real.all;
use ieee.numeric_std.all;

entity main is
	port (
		clk : in std_logic;
		rst : in std_logic;
		result : out std_logic_vector(0 to (N_large * 5))--code_stream
	);
end entity main;

architecture My_Main of main is
	variable image_data : matrix;
	variable image_row : int_vq_index;
	variable image_col : int_vq_index;
	variable secret : std_logic_vector(0 to (N_large * 5));
	variable counter : counter_int;
	variable stream_len : codestream_index;
	signal temp_secret : std_logic_vector(3 downto 0);
	variable secret_index : codestream_index;
	variable secret_len : codestream_index;
	variable temp_secret_index: codestream_index;
	variable stream_limit : codestream_index;
	variable zeroes_arr : std_logic_vector(0 to n_small);
	variable substream_size_val : substream_size;
	signal vq_index : int_vq_index;
	signal list_index : int_list_index;
	signal to_stream : std_logic;
	signal stream: std_logic_vector(0 to (N_large * 5));
	signal current_state : main_state;
	signal next_state : main_state;
begin

	-- read in the input file for the image
	-- read in the secret message
	
	-- instantiate entity for list
	list_unit: entity work.list(SELF_ORGANIZING_LIST)
		port map(rst        => rst,
			     vq_index   => vq_index,
			     list_index => list_index);
			     
	-- instantiate code stream
	-- code_stream_unit: entity work.codestream
		-- port map(inbit  => to_stream,
			--     stream => stream, 
			  --   len => stream_len);
	-- process for state stup
	
	setup_process: process(clk, rst)
	begin
		if rst = '1' then
			next_state <= START_READING;
			counter := 0;
			stream_len := 0;
			image_row := 0;
			image_col := 0;
			secret_index := 0;
			secret_len := 0;
			zeroes_arr := (others => '0');
		elsif rising_edge(clk) then
			current_state <= next_state;
		end if; 
	end process;
	
	main_process: process(current_state)
	begin
		case current_state is
		when START_READING =>
			-- start reading process here
			next_state <= START_ENCODING;
		when START_ENCODING =>
			vq_index <= image_data(image_row)(image_col);-- value from file
			image_row := image_row + 1;
			if image_row = 128 then
				image_row := 0;
			end if;
			if list_index = 0 then -- if the list does not contain that vq index
				counter := n_small + 1;
				next_state <= INDEX_NOT_IN_LIST;
			else
				next_state <= INDEX_PRESENT_IN_LIST;
			end if;
		when INDEX_NOT_IN_LIST =>
			stream_limit := stream_len + n_small - 1;
			stream(stream_len to stream_limit) <= zeroes_arr(0  to (n_small  - 1));
			stream_len := stream_limit + 1;
			next_state <= START_ENCODING;
		when INDEX_PRESENT_IN_LIST => 
			temp_secret_index := secret_len + (n_small - 1);
			temp_secret(0 to (n_small - 1)) <= secret(secret_len to temp_secret_index);
			if temp_secret = "0000" then
				if list_index = 1 then
					next_state <= ALL_ZEROES_1;
					counter := 4;
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
			stream_limit := stream_len + (n_small - 1) + 2;
			stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & "11";
			stream_len := stream_limit + 1;
		when NOT_ALL_ZEROES_1 =>
			stream_limit := stream_len + (n_small - 1) + 1;
			stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & "1";
			stream_len := stream_limit + 1;
		when ALL_ZEROES_O =>
			substream_size_val := get_substream_size(list_index);
			stream_limit := stream_len + (n_small - 1) + substream_size_val + substream_size_val + 1;
			if substream_size_val = 1 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"10" & std_logic_vector(to_unsigned(list_index, 1));
			elsif substream_size_val = 2 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"100" & std_logic_vector(to_unsigned(list_index, 2));
			elsif substream_size_val = 3 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"1000" & std_logic_vector(to_unsigned(list_index, 3));
			elsif substream_size_val = 4 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"10000" & std_logic_vector(to_unsigned(list_index, 4));
			else 
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"100000" & std_logic_vector(to_unsigned(list_index, 5));
			end if;
			stream_len := stream_limit + 1;
		when NOT_ALL_ZEROES_0 =>
			substream_size_val := get_substream_size(list_index);
			stream_limit := stream_len + (n_small - 1) + substream_size_val + substream_size_val;
			if substream_size_val = 1 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"0" & std_logic_vector(to_unsigned(list_index, 1));
			elsif substream_size_val = 2 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"00" & std_logic_vector(to_unsigned(list_index, 2));
			elsif substream_size_val = 3 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"000" & std_logic_vector(to_unsigned(list_index, 3));
			elsif substream_size_val = 4 then
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"0000" & std_logic_vector(to_unsigned(list_index, 4));
			else 
				stream(stream_len to stream_limit) <= temp_secret(0 to (n_small - 1)) & 
					"00000" & std_logic_vector(to_unsigned(list_index, 5));
			end if;
			stream_len := stream_limit + 1;
		when DONE =>
			result <= stream;
			next_state <= DONE;
		end case;
	end process;
	

end architecture My_Main;