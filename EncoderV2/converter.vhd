----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:25:13 03/18/2015 
-- Design Name: 
-- Module Name:    converter - Behavioral 
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

use work.size_data_pkg.all;
use ieee.numeric_std.all;


entity converter is
	Port (
		vq_pre : in std_logic_vector(7 downto 0);
		secret_bit_pre : in std_logic_vector(0 downto 0);
		vq : out vq_index;
		secret_bit : out std_logic
	);
end converter;

architecture Behavioral of converter is

begin
	
	vq <= to_integer(unsigned(vq_pre));
	secret_bit <= secret_bit_pre(0);
	

end Behavioral;

