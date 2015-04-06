import sys
arguments = sys.argv[1 : ]
input_file_name = arguments[0]
output_file_name = arguments[1]
input_file = open(input_file_name,  'r')
all_data = input_file.read()
data_vector = all_data.split()
data_vector = filter(lambda x : len(x) > 0, data_vector)
vec = ',\n'.join(data_vector)

output_file = open(output_file_name, 'w')
output_file.write('memory_initialization_radix=10;')
output_file.write('\n')
output_file.write('memory_initialization_vector=')
output_file.write('\n')
output_file.write(str(vec) + ';')
input_file.close()
output_file.close()
