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

package size_constraints_pkg is

	subtype vq_index is integer range 0 to 129;
	subtype list_index is integer range 0 to 4;
	subtype counter_int is integer range 0 to 10;
	constant MAX_LIST_SIZE : natural := 4;
	constant RAM_ADDRESS_SIZE : natural := 18;
	constant LIST_FILLER : vq_index := 128;
	constant MAX_NUMBER_OF_BITS_FOR_VQ : natural := 8;
	constant MAX_BUFFER_SIZE : natural := 10;
	constant INITIAL_LIST_ELEMENT : vq_index := 129;
	
	subtype buffer_index is integer range 0 to MAX_BUFFER_SIZE;
	constant NUMBER_OF_BITS : integer := 137633;
	subtype memory_counter_int is integer range 0 to (NUMBER_OF_BITS + 3);
	type vq_index_list is array (1 to MAX_LIST_SIZE) of vq_index;

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

end size_constraints_pkg;

package body size_constraints_pkg is

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
 
end size_constraints_pkg;
