library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.globals.all;

entity codestream is
	port (
		-- clk : in std_logic;
		-- rst : in std_logic;
		inbit : in std_logic;
		stream : out code_stream;
		len : out codestream_index
	);
end entity codestream;

architecture MY_CODESTREAM of codestream is
	variable internal_len : codestream_index;
	variable internal_stream : code_stream;
begin
	
	-- process to initialize the codestream
	-- setup_process : process(clk, rst) 
	-- begin
		-- if rising_edge(clk) and rst = '1' then
			-- stream <= (others => '0');
			-- len := 0;
		-- end if;
	-- end process;
	
	-- process to insert a bit into a code stream
	insertion_process : process(inbit) 
	begin
		internal_len := internal_len + 1;
		internal_stream(internal_len) := inbit;
		stream <= internal_stream;
		len <= internal_len;
	end process;
	

end architecture MY_CODESTREAM;
