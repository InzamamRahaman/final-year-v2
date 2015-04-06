----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:17:52 03/17/2015 
-- Design Name: 
-- Module Name:    encoder - Behavioral 
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

use work.size_data_pkg.all;
use work.encoder_state_pkg.all;
use work.conversions_pkg.all;
use ieee.std_logic_textio.all; 
use std.textio.all;

entity encoder is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  vq : in vq_index;
			  secret_bit : in std_logic;
			  send_more : out std_logic;
			  send_more_secret : out std_logic;
           entry : out  STD_LOGIC_VECTOR(1 to MAX_BUFFER_SIZE);
			  entry_len : out STD_LOGIC_VECTOR(3 downto 0);
			  completed : out std_logic
			  -- next_state : encoder_state;
			  );
			  
end encoder;

architecture Behavioral of encoder is
	signal current_state : encoder_state;
	--signal next_state : encoder_state;
	signal li : list_index;
	signal num_bits : list_index_size;
	signal enable_list : std_logic;
	signal vq_count : vq_index_number;
begin

	-- self orgnaizing list
	
	list_unit : entity work.list(Behavioral) port
		map (
			clk => clk,
			rst => rst,
			enable_list => enable_list,
			vq => vq,
			index => li
		);
		
	list_index_size_calc_unit : entity work.list_index_size_calc(Behavioral) port
		map (
			index => li,
			num_bits => num_bits
		);
	
	main_pr : process(clk, rst)
		variable output_buffer : std_logic_vector(1 to MAX_BUFFER_SIZE) := (others => '0');
		variable buffer_size : buffer_index := 0;
		--variable my_line : line;
		--file indicies : text is out "reported_index.txt";
	begin
		if rst = '1' then
			current_state <= RESET_STATE;
			--next_state <= READING_DATA;
			send_more <= '0';
			completed <= '0';
			entry <= (others => '0');
			entry_len <= (others => '0');
			enable_list <= '0';
			vq_count <= 0;
		elsif rising_edge(clk) then
		enable_list <= '0';
		entry_len <= (others => '0');
		entry <= (others => '0');
		send_more_secret <= '0';
		send_more <= '0';
		vq_count <= vq_count + 0;
		case current_state is
			when RESET_STATE =>
			   --report "RESET STATE";
				--write(my_line, integer'image(vq));
				--writeline(indicies, my_line);
				current_state <= INDEX_CONTAINED_FALSE;
				send_more <= '1';
			when INFORM_USER =>
				--report "INFORM USER";
				send_more_secret <= '0';
				send_more <= '0';
				current_state <= AWAITING_LIST_TRANSFORM;
				enable_list <= '1';
			when AWAITING_LIST_TRANSFORM =>
				--report "AWAITING_LIST_TRANSFORM";
				current_state <= READING_DATA;
			when READING_DATA =>
				--report "READING_DATA";
				--report "Reading data";
				--report integer'image(vq);
				--write(my_line, integer'image(vq));
				--writeline(indicies, my_line);
				--report std_logic'image(secret_bit);
				--report integer'image(li);
--				send_more <= '0';
--				send_more_secret <= '0';
--				enable_list <= '0';
				if vq_count = 16384 then
					--report "Heading into the done state";
					current_state <= ANOTHER_DONE;
					--report "Assigned next state";
					--finished <= '1';
				elsif li = 0 then
					current_state <= INDEX_CONTAINED_FALSE;
					send_more <= '1';
				else
					current_state <= INDEX_CONTAINED_TRUE;
					send_more <= '1';
				end if;
			when INDEX_CONTAINED_FALSE =>
				--report "INDEX_CONTAINED_FALSE";
				vq_count <= vq_count + 1;
				entry(1 to 10) <= "00" & std_logic_vector(to_unsigned(vq, 8));
				entry_len <= "1010";
				current_state <= INFORM_USER;
			when INDEX_CONTAINED_TRUE =>
				--report "INDEX_CONTAINED_TRUE";
				vq_count <= vq_count + 1;
				if secret_bit = '0' then
					current_state <= ALL_SECRET_ZERO_TRUE;
				else
					current_state <= ALL_SECRET_ZERO_FALSE;
				end if;
			when ALL_SECRET_ZERO_TRUE =>
				--report "ALL_SECRET_ZERO_TRUE";
				if li = 1 then
					current_state <= CASE_2;
				else
					current_state <= CASE_3;
				end if;
			when ALL_SECRET_ZERO_FALSE =>
				--report "ALL_SECRET_ZERO_FALSE";
				if li = 1 then
					current_state <= CASE_4;
				else
					current_state <= CASE_5;
				end if;
			when CASE_2 =>
				--report "CASE_2";
				entry(1) <= '0';
				entry(2 to 3) <= "11";
				entry_len <=  "0011";--convert_to_length(3);
				current_state <= REQUEST_MORE_SECRET;
			when CASE_4 =>
				--report "CASE_4";
				entry(1) <= secret_bit;
				entry(2) <= '1';
				entry_len <= "0010";
				current_state <= REQUEST_MORE_SECRET;
			when CASE_3 => 
				report "CASE_3";
				entry(1) <= '0';
				entry(2) <= '1';
				if num_bits = 1 then
				   entry(3) <= '0';
					entry(4 to 5) <= std_logic_vector(to_unsigned(li, 2));
					entry_len <= "0101";
				elsif num_bits = 2 then
					entry(3 to 4) <= "00";
					entry(5 to 7) <= std_logic_vector(to_unsigned(li, 3));
					entry_len <= "0111";
				else
					entry(3 to 5) <= "000";
					entry(6 to 9) <= std_logic_vector(to_unsigned(li, 4));
					entry_len <= "1001";
				end if;
				current_state <= REQUEST_MORE_SECRET;
			when CASE_5 => 
				--report "CASE_5";
				entry(1) <= secret_bit;
				if num_bits = 1 then
				   entry(2) <= '0';
					entry(3 to 4) <= std_logic_vector(to_unsigned(li, 2));
					entry_len <= "0100";
				elsif num_bits = 2 then
					entry(2 to 3) <= "00";
					entry(4 to 6) <= std_logic_vector(to_unsigned(li, 3));
					entry_len <= "0110";
				else
					entry(2 to 4) <= "000";
					entry(5 to 8) <= std_logic_vector(to_unsigned(li, 4));
					entry_len <= "1000";
				end if;
				current_state <= REQUEST_MORE_SECRET;
			when REQUEST_MORE_SECRET =>
				send_more_secret <= '1';
				current_state <= INFORM_USER;
			when DONE => 
				--report "DONE";
				--completed <= '1';
				send_more <= '0';
				send_more_secret <= '0';
				current_state <= ANOTHER_DONE;
			when ANOTHER_DONE =>
				--report "ANOTHER DONE";
				--completed <= '1';
				send_more <= '0';
				send_more_secret <= '0';
				current_state <= DONE;
			when others =>
				--report "illegal state";
				completed <= '1';
			end case;
		end if;
	end process;
	
--	transition_pr : process(clk, rst)
--	begin
--		if rst = '1' then
--			current_state <= READING_DATA;
--		elsif rising_edge(clk) then
--			current_state <= next_state;
--		end if;
--	end process;
--	
	
	
--	encoding_pr : process(current_state, vq, li, secret_bit)
--		variable output_buffer : std_logic_vector(1 to MAX_BUFFER_SIZE) := (others => '0');
--		variable buffer_size : buffer_index := 0;
--	begin
--		output_buffer := (others => '0');
--		buffer_index := 0;
--		case current_state is
--			when INFORM_USER =>
--				send_more <= '1';
--				current_state <= READING_DATA;
--			when READING_DATA =>
--				send_more <= '0';
--				if vq = 0 then
--					current_state <= DONE;
--				elsif li = 0 then
--					current_state <= INDEX_CONTAINED_FALSE;
--				else
--					current_state <= INDEX_CONTAINED_TRUE;
--				end if;
--			when INDEX_CONTAINED_FALSE =>
--				buffer_size := 10;
--				output_buffer(1 to 10) := "00" 
--					& std_logic_vector(to_unsigned(vq, 8));
--				next_state <= SEND_ENCODING;
--				finished <= '0';
--			when SEND_ENCODING =>
--				send_more <= '0';
--				entry <= output_buffer;
--				entry_len <= std_logic_vector(to_unsigned(buffer_size, 4));
--				next_state <= INFORM_USER;
--				finished <= '0';
--			when INDEX_CONTAINED_TRUE =>
--				if secret_bit = '0' then
--					send_more <= '0';
--					output_buffer := (others => '0');
--					entry <= (others => '0');
--					entry_len <= (others => '0');
--					buffer_size := 0;
--					next_state <= ALL_SECRET_ZERO_TRUE;
--					finished <= '0';
--				else
--					send_more <= '0';
--					output_buffer := (others => '0');
--					entry <= (others => '0');
--					entry_len <= (others => '0');
--					buffer_size := 0;
--					next_state <= ALL_SECRET_ZERO_FALSE;
--					finished <= '0';
--				end if;
--			when ALL_SECRET_ZERO_TRUE =>
--				if li = 1 then
--					send_more <= '0';
--					output_buffer := (others => '0');
--					entry <= (others => '0');
--					entry_len <= (others => '0');
--					buffer_size := 0;
--					next_state <= CASE_2;
--					finished <= '0';
--				else
--					send_more <= '0';
--					output_buffer := (others => '0');
--					entry <= (others => '0');
--					entry_len <= (others => '0');
--					buffer_size := 0;
--					next_state <= CASE_3;
--					finished <= '0';
--				end if;
--			when ALL_SECRET_ZERO_FALSE =>
--				if li = 1 then
--					send_more <= '0';
--					output_buffer := (others => '0');
--					entry <= (others => '0');
--					entry_len <= (others => '0');
--					buffer_size := 0;
--					next_state <= CASE_4;
--					finished <= '0';
--				else
--					send_more <= '0';
--					output_buffer := (others => '0');
--					entry <= (others => '0');
--					entry_len <= (others => '0');
--					buffer_size := 0;
--					next_state <= CASE_5;
--					finished <= '0';
--				end if;
--			when CASE_2 =>
--				send_more <= '0';
--				entry <= (others => '0');
--				entry_len <= (others => '0');
--				output_buffer(1) := secret_bit;
--				output_buffer(2 to 3) := "11";
--				buffer_size := 3;
--				next_state <= SEND_ENCODING;
--				finished <= '0';
--			when CASE_4 =>
--				send_more <= '0';
--				entry <= (others => '0');
--				entry_len <= (others => '0');
--				output_buffer(1) := secret_bit;
--				output_buffer(2) := '1';
--				buffer_size := 2;
--				next_state <= SEND_ENCODING;
--				finished <= '0';
--			when CASE_3 => 
--				send_more <= '0';
--				output_buffer := (others => '0');
--				entry <= (others => '0');
--				entry_len <= (others => '0');
--				buffer_size := 0;
--				finished <= '0';
--			when CASE_5 => 
--				send_more <= '0';
--				output_buffer := (others => '0');
--				entry <= (others => '0');
--				entry_len <= (others => '0');
--				buffer_size := 0;
--				finished <= '0';
--			when DONE => 
--				send_more <= '0';
--				output_buffer := (others => '0');
--				entry <= (others => '0');
--				entry_len <= (others => '0');
--				buffer_size := 0;
--				finished <= '1';
--				next_state <= DONE;
--			end case;
--	end process;
	


end Behavioral;

