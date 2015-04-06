import sys

arguments = sys.argv
input_file_name = arguments[1]
input_file = open(input_file_name, 'r')
input_file_contents = input_file.read()
words = filter(lambda x : len(x) > 0, input_file_contents.split('\n'))
print len(words)
