----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:59:51 03/15/2015 
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

use work.globals.all;

entity list is
    Port ( elements : inout  vq_index_list;
           to_insert : in  int_vq_index;
			  location : out int_list_index);
end list;

architecture Behavioral of list is
begin
	
	insertion_process: process(elements, to_insert)
		variable xs : vq_index_list;
		variable value_to_insert : int_vq_index;
	begin
		if to_insert = 0 then
			location <= 0;
		else
			xs := elements;
			value_to_insert := to_insert;
			retrieve_list_index(xs, value_to_insert, location);
		end if;
	end process;

end Behavioral;

