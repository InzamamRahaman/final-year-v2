----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:33:24 03/18/2015 
-- Design Name: 
-- Module Name:    address_calculator - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity address_calculator is
    Port ( clk : in std_logic;
	        rst : in std_logic;
			  image_address : inout  STD_LOGIC_VECTOR(14 downto 0);
           secret_address : inout  STD_LOGIC_VECTOR(16 downto 0);
           compute_now : in  STD_LOGIC;
			  compute_secret_now : in std_logic);
end address_calculator;

architecture Behavioral of address_calculator is
begin
	
	calc_pr : process(clk, rst)
	begin
		if rst = '1' then
			image_address <= (others => '0');
			secret_address <= (others => '0');
		elsif rising_edge(clk) then
			if compute_now = '1' then
				image_address <= std_logic_vector(unsigned(image_address) + 1);
			end if;
			if compute_secret_now = '1' then
				secret_address <= std_logic_vector(unsigned(secret_address) + 1);
			end if;
		end if;
	end process;
	
end Behavioral;

