--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:44:45 03/19/2015
-- Design Name:   
-- Module Name:   /home/school/ise_projs/final-year-project/EncoderV2/top_test_1.vhd
-- Project Name:  EncoderV2
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
use ieee.std_logic_textio.all; 
use std.textio.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY top_test_1 IS
END top_test_1;
 
ARCHITECTURE behavior OF top_test_1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         stream_segment : OUT  std_logic_vector(1 to 10);
         stream_segment_len : OUT  std_logic_vector(3 downto 0);
         completed : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal stream_segment : std_logic_vector(1 to 10) := (others => '0');
   signal stream_segment_len : std_logic_vector(3 downto 0) := (others => '0');
   signal completed : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk => clk,
          rst => rst,
          stream_segment => stream_segment,
          stream_segment_len => stream_segment_len,
          completed => completed
        );

   -- Clock process definitions
   clk_process :process
		variable my_line : line;
		file outfile : text is out "output_circuit.txt";
   begin
		   clk <= '0';
			wait for clk_period/2;
			clk <= '1';
			--report "Clock on";
			if (not (stream_segment_len = "0000")) then
--				report "Received new substream";
--   			write(my_line, stream_segment);
--				writeline(output, my_line);
            --write(my_line, integer'image(vq));
				--writeline(outfile, my_line);
				write(my_line, stream_segment);
				writeline(outfile, my_line);
				write(my_line, stream_segment_len);
				writeline(outfile, my_line);
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
      wait until completed = '1';
		
      -- insert stimulus here 
   end process;

END;
