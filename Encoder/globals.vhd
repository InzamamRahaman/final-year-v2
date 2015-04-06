library ieee;
use ieee.std_logic_1164.all;
library ieee;
use ieee.numeric_std.all;
package globals is
	
	-- constants 
	constant n_small : integer := 4; -- number of secret bit per index
	constant N_large : integer := 128; -- the size of the codebooks
	constant l : integer := 16; -- the size of the self-organizing list
	constant all_zero_0_fill : std_logic_vector(0 to 7) := "10000000";
	constant not_all_zero_0_fill : std_logic_vector(0 to 6) := "0000000";
	
	-- subtypes to accurately represent indicies
	
	-- type to represent list indicies
	subtype int_list_index is integer range 0 to l;
	
	-- type to represent vq indicies
	subtype int_vq_index is integer range 0 to N_large;
	subtype codestream_index is integer range -1 to N_large * 5 + n_small;
	subtype counter_int is integer range 0 to 10;
	subtype substream_size is integer range 0 to 7;
	subtype image_index is integer range -1 to ((128 * 128) + 1);
	--record types
	
	-- membership_data models the possibility of a vq_index being
	-- in our list
	type membership_data is
		record
			is_present : std_logic;
			location : int_list_index;
		end record;
	
	-- array types
	type image_data is array (0 to (128 * 128 - 1)) of int_vq_index;
	type vq_index_list is array (0 to l) of int_vq_index;
	--type code_stream is std_logic_vector(0 to N_large * 5);--/array (0 t_o (N_large * 5)) of std_logic;
	type matrix_row is array (0 to N_large) of int_vq_index;
	type matrix is array (0 to N_large) of matrix_row;
	type transformed_image_row is array (0 to N_large * N_large) of int_vq_index;
	
	
	-- types for files
	type image_file is file of int_vq_index;
	type secret_file is file of std_logic;
	
	-- files
	file img : image_file is in "image.txt";
	file in_secret : secret_file is in "secret.txt";
	file out_secret : secret_file is out "output.txt";
	
	-- enumerated types for state management
	type main_state is (SETUP, READING_IMAGE, READING_SECRET, START_ENCODING, INDEX_NOT_IN_LIST,
		INDEX_PRESENT_IN_LIST,ALL_ZEROES_O,  NOT_ALL_ZEROES_0, ALL_ZEROES_1,
		NOT_ALL_ZEROES_1, DONE, STOP
	);
	
	-- functions for simple data manipulations
	function is_member(xs : vq_index_list; elem : int_vq_index) 
	return membership_data; 
	
	function get_substream_size(num : int_list_index)
	return substream_size;
	
	-- procedures for moving data throughout an array
	procedure sift_up(xs : inout vq_index_list; start : in int_list_index);
	procedure sift_down(xs : inout vq_index_list; index : in int_vq_index);
	
	-- procedure get_list_index(xs : inout vq_index_list;
		-- value : in int_vq_index; ans : out int_list_index);
		procedure retrieve_list_index(xs : inout vq_index_list;
		index : in int_vq_index; signal location : out int_list_index);
end package globals;

package body globals is

	-- this function scans the list containing vq indicies and determines
	-- if the list contains the vq_index begin considered
	
	procedure is_member_v(xs : in vq_index_list; 
		elem : in int_vq_index; 
		location : out int_list_index)
	is
		variable temp_loc : int_list_index;
	begin
		temp_loc := 0;
		for idx in 0 to (l - 1) loop
			if xs(idx) = elem then
				temp_loc := idx + 1;
			else
				temp_loc := temp_loc;
			end if;
		end loop;
		location := temp_loc;
	end;
	
	function is_member(xs : vq_index_list; elem : int_vq_index)
	return membership_data is
		variable data : membership_data;
	begin
		for idx in 0 to (l - 1) loop
			if xs(idx) = elem then
				data.is_present := '1';
				data.location := idx;
				return data;
			end if;
		end loop;
		data.is_present := '0';
		return data;
	end;
	
	function get_substream_size(num : int_list_index)
	return substream_size is
	begin
		if num < 2 then
			return 1;
		elsif num < 4 then
			return 2;
		elsif num < 8 then
			return 3;
		elsif num < 16 then
			return 4;
		else 
			return 5;
		end if;
	end;
	
	
	procedure sift_up(xs : inout vq_index_list; start : in int_list_index)
	is
		variable ans : int_list_index;
		variable temp_index : int_list_index;
	begin 
		temp_index := xs(start - 1);
		--ans := start + 1; -- plus one as the method requires i-indexing
		if temp_index = 0 then
			xs(0) := temp_index;
		else
			for idx in (start - 2) downto 0 loop
				xs(idx + 1) := xs(idx);
			end loop;
			xs(0) := temp_index;
		end if;
	end;
	
	procedure sift_down(xs : inout vq_index_list; 
		index : in int_vq_index)
	is 
		variable limit : int_list_index;
	begin
		for idx in 1 to (l - 1) loop
			xs(idx) := xs(idx - 1);
		end loop;
		xs(0) := index;
	end;

	-- NB
	-- we shall return 1 + the actual location in the array
	-- we do this in alignment with the method as mentioned in Kieu et all
	

	procedure retrieve_list_index(xs : inout vq_index_list;
		index : in int_vq_index; signal location : out int_list_index)
	is
		variable temp_location : int_list_index;
	begin	
		is_member_v(xs, index, temp_location);
		if temp_location = 0 then
			sift_up(xs, temp_location);
			temp_location := temp_location;
		else
			sift_down(xs, index);
			temp_location := 1;
		end if;
		location <= temp_location;
	end procedure;

	

	
end package body globals;
