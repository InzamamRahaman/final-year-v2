----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:21:15 03/28/2015 
-- Design Name: 
-- Module Name:    list - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

use work.size_constraints_pkg.all;

entity list is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           enable_insert : in  STD_LOGIC; -- enable the insertion of a vq index
           to_insert : in vq_index; -- the vq index to be inserted
           index : in  list_index; -- the position of the item we want to retrieve
			  enable_read : in std_logic; -- enable the reading of the list at param index
           at_index_one : out  vq_index; -- the value in the first position of the list
           value_at_index : out  vq_index); -- the value at the specified index
end list;

architecture list_arch of list is
	signal contents : vq_index_list;
	signal last_index : list_index;
begin

	main_pr : process(clk, rst)
	   variable location : list_index;
		variable temp_index : vq_index;
	begin
		if rst = '1' then
			location := 0;
			for idx in 1 to MAX_LIST_SIZE loop
				contents(idx) <= INITIAL_LIST_ELEMENT;
			end loop;
			last_index <= 1;
		elsif rising_edge(clk) then
			-- initialize the outputs
			at_index_one <= contents(1);
			value_at_index <= 0;
			-- handle insertion case first
			if enable_insert = '1' then
				for idx in 1 to MAX_LIST_SIZE loop
					if contents(idx) = to_insert then
						location := idx;
					else
						location := location;
					end if;
				end loop;
				
				for jdx in MAX_LIST_SIZE downto 2 loop
					if location = 0 then
						contents(jdx) <= contents(jdx - 1);
					elsif location > 0 and jdx <= location then
						contents(jdx) <= contents(jdx - 1);
					else
						contents(jdx) <= contents(jdx);
					end if;
				end loop;
				contents(1) <= to_insert;
				at_index_one <= to_insert;
			-- handle case for reading
			elsif enable_read = '1' then
				-- read at index
				temp_index := contents(index);
				
				-- migrate the value up
				for jdx in MAX_LIST_SIZE downto 2 loop
					if jdx <= index then
						contents(jdx) <= contents(jdx - 1);
					else
						contents(jdx) <= contents(jdx);
					end if;
				end loop;
				
				contents(1) <= temp_index;
				value_at_index <= temp_index;
				at_index_one <= temp_index;
			end if;
		end if;
	end process;

end list_arch;

