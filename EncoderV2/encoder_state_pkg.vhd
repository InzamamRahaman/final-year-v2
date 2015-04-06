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

package encoder_state_pkg is
	
	type encoder_state is (READING_DATA, 
	AWAITING_LIST_TRANSFORM, RESET_STATE, ANOTHER_DONE,
	INFORM_USER, DONE, INDEX_CONTAINED_FALSE, INDEX_CONTAINED_TRUE, REQUEST_MORE_SECRET,
	ALL_SECRET_ZERO_TRUE, ALL_SECRET_ZERO_FALSE, CASE_2, CASE_3, CASE_4, CASE_5);
	
end encoder_state_pkg;

package body encoder_state_pkg is

end encoder_state_pkg;
