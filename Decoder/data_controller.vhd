----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:09:17 04/01/2015 
-- Design Name: 
-- Module Name:    data_controller - Behavioral 
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

use work.size_constraints_pkg.all;

entity data_controller is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           send_in : in  STD_LOGIC;
           bit_out : out  STD_LOGIC;
			  finished : out std_logic);
end data_controller;

architecture data_controller_arch of data_controller is
	signal current_address : std_logic_vector(0 to RAM_ADDRESS_SIZE - 1);
	signal current_data : std_logic_vector(0 to 0);
	signal counter : memory_counter_int;
	signal is_finished : std_logic;
	-- interface for component responsible for data
	-- conversion
	component data_converter
		port (
			bit_in : in std_logic_vector(0 to 0);
			bit_out : out std_logic
		);
	end component;
	
	COMPONENT data_ram
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(17 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(0 DOWNTO 0)
  );
END COMPONENT;
	
begin

	-- insert Ram component here
	
	-- insert component for data conversion here
	converter_unit : data_converter port map (
		bit_in => current_data,
		bit_out => bit_out
	);
	
	ram_unit : data_ram
  PORT MAP (
    clka => clk,
    wea => (others => '0'),
    addra => current_address,
    dina => (others => '0'),
    douta => current_data
  );
	
	main_pr : process(clk, rst)
	begin
		if rst = '1' then
			current_address <= (others => '0');
			counter <= 0;
			is_finished <= '0';
			--bit_out <= '0';
		elsif rising_edge(clk) then
			finished <= '0';
			if counter >= NUMBER_OF_BITS then
			   report "Finished with addresses";
				finished <= '1';
				is_finished <= '1';
			else
				finished <= '0';
				is_finished <= '0';
			end if;
			
			if send_in = '1' and is_finished = '0' then
				if counter < NUMBER_OF_BITS then
					current_address <= std_logic_vector(unsigned(current_address)
					+ 1);
					counter <= counter + 1;
					--report integer'image(counter + 1);
				else
					finished <= '1';
				end if;
			else
				current_address <= std_logic_vector(unsigned(current_address)
					+ 0);
			end if;
		end if;
	end process;

end data_controller_arch;

