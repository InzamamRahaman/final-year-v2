----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:18:44 03/28/2015 
-- Design Name: 
-- Module Name:    top - Behavioral 
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

entity top is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           finished_out : out  STD_LOGIC;
           sending_bit_out : out  STD_LOGIC;
           bit_out : out  STD_LOGIC;
			  vq_index_out  : out std_logic_vector(
					MAX_NUMBER_OF_BITS_FOR_VQ - 1 downto 0);
			  sending_vq_index_out : out std_logic);
end top;

architecture Behavioral of top is
	signal need_more_data_out : std_logic;
	signal bit_into_decoder : std_logic;
	signal data_finished : std_logic;
	-- component for decoder here
	component decoder is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  bit_in : in std_logic;
			  data_finished : in std_logic;
			  need_more_data_out : out std_logic;
           finished_out : out  STD_LOGIC;
           sending_bit_out : out  STD_LOGIC;
           bit_out : out  STD_LOGIC;
			  vq_index_out : out std_logic_vector(
					MAX_NUMBER_OF_BITS_FOR_VQ - 1 downto 0);
			  sending_vq_index_out : out std_logic);
	end component;
	
	-- component definition for data controller
	component data_controller is
	Port (
		clk : in  STD_LOGIC;
      rst : in  STD_LOGIC;
      send_in : in  STD_LOGIC;
      bit_out : out  STD_LOGIC;
		finished : out std_logic
	);
	end component;
begin

	data_controller_unit : data_controller port map (
		clk => clk, rst => rst,
		send_in => need_more_data_out,
		bit_out => bit_into_decoder,
		finished => data_finished
	);
	
	decoder_unit : decoder port map (
		clk => clk, rst => rst,
		need_more_data_out => need_more_data_out,
		bit_in => bit_into_decoder,
		data_finished => data_finished,
		finished_out => finished_out,
		sending_bit_out => sending_bit_out,
		bit_out => bit_out,
		vq_index_out => vq_index_out,
		sending_vq_index_out => sending_vq_index_out
	);
	
	
	

end Behavioral;

