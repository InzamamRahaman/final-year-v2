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
use ieee.numeric_std.all;

package conversions_pkg is


	function convert_to_length(signal num : natural) return 
	std_logic_vector;


end conversions_pkg;

package body conversions_pkg is
	
	function convert_to_length(signal num : natural) 
	return std_logic_vector
	is 
	begin
			return std_logic_vector(to_unsigned(num, 4));
	end convert_to_length;

 
end conversions_pkg;
