----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:02:33 03/17/2015 
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
use work.size_data_pkg.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity list is
    Port ( clk : in std_logic;
				rst : in std_logic;
				enable_list : in std_logic;
				vq : in  vq_index; 
           index : out  list_index);
end list;

architecture Behavioral of list is	
begin

	insertion_pr: process(clk, rst)
		variable elements : vq_index_list;
		variable response : list_index;
	begin
		
		if rst = '1' then
			for idx in 1 to MAX_LIST_SIZE loop
				elements(idx) := -1;
			end loop;
			response := 0;
		elsif rising_edge(clk) then
			if enable_list = '1' then
				response := 0;
				for idx in 1 to MAX_LIST_SIZE loop
					if elements(idx) = vq then
						response := idx;
					else
						response := response;
					end if;
				end loop;
				for jdx in MAX_LIST_SIZE downto 2 loop
					if response = 0 then
						elements(jdx) := elements(jdx - 1);
					elsif response > 1 and response >= jdx then
						elements(jdx) := elements(jdx - 1);
					else
						elements(jdx) := elements(jdx);
					end if;
				end loop;
				elements(1) := vq;
				index <= response;
			end if;
		end if;
	end process;

end Behavioral;

