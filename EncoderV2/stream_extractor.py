import sys
from file_cleaner import read_and_clean_file

def bin_to_int(arr):
  idx = 1
  ans = 0
  for num in reversed(arr):
    if num == '1':
      ans = ans + idx
      idx = idx * 2
  return ans

arguments = sys.argv
filename = arguments[1]
file_obj = open(filename, 'r')
data = read_and_clean_file(file_obj)
file_obj.close()

num_entries = len(data)
even_range = range(0, num_entries, 2)
odd_range = range(1, num_entries, 2)

complete_stream = ''

for (strm_idx, lenght_idx) in zip(even_range, odd_range):
  strm = data[strm_idx]
  complete_stream = complete_stream + strm[ : bin_to_int(data[length_idx])]

outfile_name = arguments[2]
outfile = open(outfile_name, 'r')
outfile.write(complete_stream)
outfile.close()
