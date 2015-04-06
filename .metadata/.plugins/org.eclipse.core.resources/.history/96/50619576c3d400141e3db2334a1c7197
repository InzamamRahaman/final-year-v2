'''
Created on Mar 27, 2015

@author: school
'''

import FileProcessor
import StremProp
import config 

import sys 
from src.FileProcessor import get_k_bits
from src.config import num_bits_per_index, bin_to_int
args = sys.argv
input_file_name = args[1]
image_file = open(args[2].strip(), 'r')
secret_file = open(args[3].strip(), 'r')

queue_of_output = FileProcessor.create_queue_of_data(input_file_name)



def main():
    while not queue_of_output.is_empty():
        bits = get_k_bits(queue_of_output, num_bits_per_index + 1)
        scenario = StremProp.compute_case(bits)
        if StremProp.StreamPop.scenario1 == scenario:
            index_bits = get_k_bits(queue_of_output, 8)
            index = bin_to_int(index_bits)
            image_file.write(index + '\n')
        elif StremProp.StreamPop.scenario2 == scenario:
            secret = bits[0 : num_bits_per_index]
            for bit in secret:
                secret_file.write(bit + '\n')
        elif StremProp.StreamPop.scenario3 == scenario:
            next_bit = queue_of_output.get()
            if int(next_bit):
                # 


if __name__ == '__main__':
    pass