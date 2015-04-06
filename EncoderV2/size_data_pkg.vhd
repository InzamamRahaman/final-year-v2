--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package size_data_pkg is

-- these constants describe properties of the image data and 
-- secret stream

	constant MAX_LIST_SIZE : integer := 4;
	constant NUM_IMAGE_ROWS : integer := 128;
	constant MAX_BUFFER_SIZE : integer := 10;
	
	
	subtype vq_index_number is integer range 0 to 16400;
	constant MAX_NUMBER_OF_VQ_INDICIES : vq_index_number := 16384;
	subtype list_index is integer range 0 to MAX_LIST_SIZE;
	subtype vq_index is integer range -1 to NUM_IMAGE_ROWS;
	subtype vq_index_size is integer range 0 to 8;
	subtype list_index_size is integer range 0 to 3;
	subtype buffer_index is integer range 0 to MAX_BUFFER_SIZE;
	
	type vq_index_list is array (1 to MAX_LIST_SIZE) of vq_index;
	
	function get_vq_index_size(vq : vq_index) return vq_index_size;
	function get_list_index_size(li : list_index) return list_index_size;

-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--
-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--

end size_data_pkg;

package body size_data_pkg is

	function get_vq_index_size(vq : vq_index) 
	return vq_index_size
	is
	begin
		if vq < 2 then
			return 1;
		elsif vq < 4 then
			return 2;
		elsif vq < 8 then
			return 3;
		elsif vq < 16 then
			return 4;
		elsif vq < 32 then
			return 5;
		elsif vq < 64 then 
			return 6;
		else
			return 7;
		end if;
	end get_vq_index_size;
	
	function get_list_index_size(li : list_index) 
	return list_index_size
	is 
	begin
		if li < 2 then
			return 1;
		else
			return 2;
		end if;
	end get_list_index_size;

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end size_data_pkg;
