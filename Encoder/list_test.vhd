--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:06:10 03/16/2015
-- Design Name:   
-- Module Name:   /home/school/ise_projs/final-year-project/Encoder/list_test.vhd
-- Project Name:  Encoder
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: list
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
use ieee.numeric_std.all;
use ieee.std_logic_textio.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY list_test IS
END list_test;
 
ARCHITECTURE behavior OF list_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT list
    PORT(
         elements : INOUT  std_logic_vector(0 to 16);
         to_insert : IN  std_logic_vector(0 to 7);
         location : OUT  std_logic_vector(0 to 4)
        );
    END COMPONENT;
    

   --Inputs
   signal to_insert : std_logic_vector(0 to 7) := (others => '0');

	--BiDirs
   signal elements : std_logic_vector(0 to 16);

 	--Outputs
   signal location : std_logic_vector(0 to 4);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: list PORT MAP (
          elements => elements,
          to_insert => to_insert,
          location => location
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		wait for 100 ns;
		to_insert <= std_logic_vector(to_unsigned(151, 8));
		report "fuck vhdl";
      wait;
   end process;


--	stim_proc1: process
--   begin		
--      -- hold reset state for 100 ns.
--		wait for 200 ns;
--		to_insert <= std_logic_vector(to_unsigned(151, 8));
--		report to_string(to_integer(unsigned(location)));
--      wait;
--   end process;
--	
--	stim_proc2: process
--   begin		
--      -- hold reset state for 100 ns.
--		wait for 300 ns;
--		to_insert <= std_logic_vector(to_unsigned(151, 8));
--		report to_string(to_integer(unsigned(location)));
--      wait;
--   end process;
	
END;
