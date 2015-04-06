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
use work.size_constraints_pkg.all;
package list_manipulations_pkg is

	procedure init_list(signal xs : out vq_index_list);
	
	procedure insert(signal xs : inout vq_index_list; 
		signal index : vq_index);


end list_manipulations_pkg;

package body list_manipulations_pkg is

	procedure init_list(signal xs : out vq_index_list)
	is
	begin
		for idx in 1 to MAX_LIST_SIZE loop
			xs(idx) <= INITIAL_LIST_ELEMENT;
		end loop;
	end init_list;
	
	procedure insert(signal xs : inout vq_index_list;
		signal index : vq_index)
	is
		variable location : list_index := 0;
	begin
		for idx in 1 to MAX_LIST_SIZE loop
			if xs(idx) = index then
				location := idx;
			else
				location := location;
			end if;
		end loop;
	end insert;

end list_manipulations_pkg;
