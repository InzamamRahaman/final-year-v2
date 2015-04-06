library ieee;
use ieee.std_logic_1164.all;
package globals is
	
	-- constants 
	constant n_small : integer := 4; -- number of secret bit per index
	constant N_large : integer := 128; -- the size of the codebooks
	constant l : integer := 16; -- the size of the self-organizing list
	
	-- subtypes to accurately represent indicies
	
	-- type to represent list indicies
	subtype int_list_index is integer range 0 to l;
	
	-- type to represent vq indicies
	subtype int_vq_index is integer range 0 to N_large;
	
	--record types
	
	-- membership_data models the possibility of a vq_index being
	-- in our list
	type membership_data is
		record
			is_present : std_logic;
			location : integer;
		end record;
	
	-- array types
	type vq_index_list is array (0 to l) of int_vq_index;
	type code_stream is array (0 to (N_large * 5)) of std_logic;
	type matrix_row is array (0 to N_large) of int_vq_index;
	type matrix is array (0 to N_large) of matrix_row;
	
	-- functions for simple data manipulations
	function is_member(xs : vq_index_list; elem : int_vq_index) 
	return membership_data; 
	
	-- procedures for moving data throughout an array
	procedure sift_up(xs : inout vq_index_list; start : in int_list_index);
	procedure sift_down(xs : inout vq_index_list; index : in int_vq_index);
	
	procedure get_list_index(xs : inout vq_index_list;
		value : in int_vq_index; ans : out int_list_index);
end package globals;

package body globals is

	-- this function scans the list containing vq indicies and determines
	-- if the list contains the vq_index begin considered
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
	
	procedure sift_up(xs : inout vq_index_list; start : in int_list_index)
	is
		variable ans : int_list_index;
		variable temp_index : int_list_index;
	begin 
		temp_index := xs(start);
		ans := start + 1; -- plus one as the method requires i-indexing
		for idx in (start - 1) to 1 loop
			xs(idx + 1) := xs(idx);
		end loop;
		xs(0) := temp_index;
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

	procedure get_list_index(xs : vq_index_list;
		value : in int_vq_index; ans : out int_list_index)
	is
		variable mem : membership_data;
	begin
		mem := is_member(xs, value);
		if mem.is_present = '1' then
			sift_up(xs, mem.location);
			ans := mem.location + 1;
		else
			sift_down(xs, value);
			ans := 0;
		end if;
	end;
	

	
end package body globals;
