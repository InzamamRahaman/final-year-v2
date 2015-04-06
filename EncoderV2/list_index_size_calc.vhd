----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:23:17 03/19/2015 
-- Design Name: 
-- Module Name:    list_index_size_calc - Behavioral 
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

use work.size_data_pkg.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity list_index_size_calc is
    Port ( index : in  list_index;
           num_bits : out  list_index_size);
end list_index_size_calc;

architecture Behavioral of list_index_size_calc is

begin
	
	conv_pr : process(index)
	begin
		if index > 7 then
			num_bits <= 3;
		elsif index > 3 then
			num_bits <= 2; 
		else
			num_bits <= 1; 
		end if;
--		if index < 3 then
--			num_bits <= 1;
--		elsif index < 4 then 
--			num_bits <= 2;
--		else
--			num_bits <= 3;
--		end if;
	end process;

end Behavioral;

