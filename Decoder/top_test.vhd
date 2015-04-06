--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:08:41 04/02/2015
-- Design Name:   
-- Module Name:   /home/school/ise_projs/final-year-project/Decoder/top_test.vhd
-- Project Name:  Decoder
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use ieee.numeric_std.ALL;
use ieee.std_logic_textio.all; 
use std.textio.all;
 
ENTITY top_test IS
END top_test;
 
ARCHITECTURE behavior OF top_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         finished_out : OUT  std_logic;
         sending_bit_out : OUT  std_logic;
         bit_out : OUT  std_logic;
         vq_index_out : OUT  std_logic_vector(7 downto 0);
         sending_vq_index_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal finished_out : std_logic := '0';
   signal sending_bit_out : std_logic := '0';
   signal bit_out : std_logic := '0';
   signal vq_index_out : std_logic_vector(7 downto 0) := (others => '0');
   signal sending_vq_index_out : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
	
	signal test : std_logic := '0';
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk => clk,
          rst => rst,
          finished_out => finished_out,
          sending_bit_out => sending_bit_out,
          bit_out => bit_out,
          vq_index_out => vq_index_out,
          sending_vq_index_out => sending_vq_index_out
        );

   -- Clock process definitions
   clk_process :process
		variable my_line : line;
		file outfile : text is out "circuit_vq_output.txt";
		variable bit_line : line;
		file bitfile : text is out "circuit_bit_output.txt";
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		if (sending_vq_index_out = '1') then
			--integer'image(to_integer(unsigned(vq_index_out)))
			write(my_line, integer'image(to_integer(unsigned(vq_index_out))));
			writeline(outfile, my_line);
		end if;
		
		if (sending_bit_out = '1') then
			write(bit_line, std_logic'image(bit_out));
			writeline(bitfile, bit_line);
		end if;
		
		if (finished_out = '1') then
			report "Finished!";
		end if;
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		rst <= '1';
      wait for clk_period * 10;	
		rst <= '0';
      --wait until finished_out = '1';
		wait until test = '1';
      -- insert stimulus here 
   end process;

END;
