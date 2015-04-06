----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:41:04 03/18/2015 
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
use ieee.numeric_std.all;
use work.size_data_pkg.all;
use work.encoder_state_pkg.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           stream_segment : out  std_logic_vector(1 to MAX_BUFFER_SIZE);
           stream_segment_len : out  std_logic_vector(3 downto 0);
			  completed : out std_logic);
end top;

                        architecture Behavioral of top is
	--signal stream_segment_len_pre : buffer_index;		
	--signal sending : std_logic;
	signal send_more_secret : std_logic;
	signal vq_pre : std_logic_vector(7 downto 0);
	signal vq : vq_index;
	signal secret_bit_pre : std_logic_vector(0 downto 0);
	signal secret_bit : std_logic;
	signal send_more : std_logic;
	signal image_address : std_logic_vector(14 downto 0);
	signal secret_address : std_logic_vector(16 downto 0);
	-- signal enable_list : std_logic;
	-- signal finished : std_logic;
	--signal stream_segment_len : std_logic_vector(3 downto 0);
	signal something : std_logic;
	
	-- list components here
	component address_calculator is
    Port ( clk : in std_logic;
			  rst : in std_logic;	
			  image_address : inout  STD_LOGIC_VECTOR(14 downto 0);
           secret_address : inout  STD_LOGIC_VECTOR(16 downto 0);
           compute_now : in  STD_LOGIC;
			  compute_secret_now : in std_logic);
	end component;
	
	component list is
    Port ( clk : in std_logic;
			  rst : in std_logic;	
				vq : in  vq_index; 
           index : out  list_index);
	end component;
	
	component converter is
	Port (
		vq_pre : in std_logic_vector(7 downto 0);
		secret_bit_pre : in std_logic_vector(0 downto 0);
		vq : out vq_index;
		secret_bit : out std_logic
	);
	end component;
	
	component encoder is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  vq : in vq_index;
			  secret_bit : in std_logic;
			  send_more : out std_logic;
           entry : out  STD_LOGIC_VECTOR(1 to MAX_BUFFER_SIZE);
			  entry_len : out STD_LOGIC_VECTOR(3 downto 0);
			  completed : out std_logic;
			  send_more_secret : out std_logic
			  );
	end component;
	
	COMPONENT IMAGE_RAM
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
END COMPONENT;

COMPONENT SECRET_RAM
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(16 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(0 DOWNTO 0)
  );
END COMPONENT;


begin

	-- used to compute the newest addresses for the
		-- image RAM and secret RAM
		address_calculator_unit : address_calculator port map (
				clk => clk,
				rst => rst,
				image_address => image_address,
				secret_address => secret_address,
				compute_now => send_more,
				compute_secret_now => send_more_secret
			);
	
		-- at clock cycle for data reading
		-- extracts the current vq index from RAM
		image_unit : IMAGE_RAM port map (
			clka => clk,
			wea => (others => '0'),
			dina => (others => '0'),
			addra => image_address,
			douta => vq_pre
		);
		
		-- at clock cycle for data reading
		-- extracts the current secert bit from RAM
		secret_unit : SECRET_RAM port map (
			clka => clk,
			wea => (others => '0'),
			dina => (others => '0'),
			addra => secret_address,
			douta => secret_bit_pre
		);
	
		-- initializes and maps ports on the converted module 
		-- to convert the data from RAMS into more 
		-- suitable formats
		convert_unit : converter port map(
				vq_pre => vq_pre,
				secret_bit_pre => secret_bit_pre,
				vq => vq,
				secret_bit => secret_bit
			);
		-- performs the primary encodings
		encoder_unit: encoder port map(
				clk => clk,
				rst => rst,
				vq => vq,
				secret_bit => secret_bit,
				--sending => sending,
				send_more => send_more,
				entry => stream_segment,
				entry_len => stream_segment_len,
				completed => completed,
				send_more_secret => send_more_secret
			);
	
	main_pr : process(clk, rst)
	begin
		if rst = '1' then
--			enable_list <= '0';
			something <= '0';
--			image_address <= (others => '0');
--			send_more_secret <= (others => '0');
--		elsif
--			if send_more = '1' then
--				image_address <= std_logic_vector(unsigned(image_address) + 1):
--			end if;
--			
--			if send_more_secret = '1' then
--				secret_address <= std_logic_vector(unsigned(secret_address) + 1);
--			end if;
		end if;
	end process;

end Behavioral;

