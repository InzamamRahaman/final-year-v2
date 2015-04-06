'''
Created on Mar 27, 2015

@author: school
'''

from FileProcessor import create_queue_of_data, get_k_bits
from config import *
from StremProp import *
from OrganizingList import OrganizingList

import sys
# from FileProcessor import get_k_bits
# from config import num_bits_per_index, bin_to_int
args = sys.argv
input_file_name = args[1]
image_file = open(args[2].strip(), 'w')
secret_file = open(args[3].strip(), 'w')
my_list = OrganizingList()

queue_of_output = create_queue_of_data(input_file_name)





def read_list_indexV2():
    bits = ''
    bit = (queue_of_output.get())
    while bit == '0':
        bits = bits + bit
        bit = queue_of_output.get()
    bits = bits + bit
    bit = queue_of_output.get()
    bits = bits + bit
    print "Checking ", bits
    index = bin_to_int(bits)
    print "Trying to get index ", index
    print "List elements: ", my_list.elements
    list_content = my_list[index]
    image_file.write(str(list_content) + '\n')

def read_list_index(start_count = 0):
    zero_count = start_count
    bit = int(queue_of_output.get())
    while bit == 0:
        zero_count += 1
        bit = int(queue_of_output.get())
    if not zero_count:
        zero_count += 1
    num = str(bit)
    while zero_count:
        zero_count -= 1
        num += str(queue_of_output.get())
    print "Checking ", num
    index = bin_to_int(num)
    print "Trying to get index ", index
    print "List elements: ", my_list.elements
    list_content = my_list[index]
    image_file.write(str(list_content) + '\n')

def write_secret_bits(bits):
    secret = bits[0]
    for bit in secret:
        secret_file.write(bit + '\n')


def handle_case_3():
    # read until we have all other zeroes
    count = 2
    bit = queue_of_output.get()
    while bit == '0':
        bit = queue_of_output.get()
        count += 1
    print "count is ", count
    number = bit
    number = number + get_k_bits(queue_of_output, count - 1)
    print "converting ", number
    index = bin_to_int(number)
    print "to --->", index
    print "List elements ", my_list.elements
    print "Retrieving"
    list_cont = my_list[index]
    print list_cont
    image_file.write(str(list_cont) + '\n')

def handle_case_5():
    # read until we have all other zeroes
    count = 2
    bit = queue_of_output.get()
    while bit == '0':
        bit = queue_of_output.get()
        count += 1
    #count += 1
    number = bit
    number = number + get_k_bits(queue_of_output, count - 1)
    print "converting ", number
    index = bin_to_int(number)
    print "to --->", index
    print "List elements ", my_list.elements
    print "Retrieving"
    list_cont = my_list[index]
    print list_cont
    image_file.write(str(list_cont) + '\n')


def main():
    while not queue_of_output.is_empty():
        bits = get_k_bits(queue_of_output, num_bits_per_index + 1)
        scenario = compute_case(bits)
        print "read ", str(bits)
        if bits == '00':
            index_bits = get_k_bits(queue_of_output, 8)
            index = bin_to_int(index_bits)
            print my_list.elements
            my_list.insert(index)
            print my_list.elements
            print "Writing ", index
            image_file.write(str(index) + '\n')
        elif bits == '01':
            write_secret_bits(bits)
            next_bit = queue_of_output.get()
            if int(next_bit):
                image_file.write(str(my_list[1]) + '\n')
            else:
                handle_case_3()
        elif bits == '10':
            handle_case_5()
        elif bits == '11':
            write_secret_bits(bits)
            image_file.write(str(my_list[1]) + '\n')
    print "Finished with decoding process"




if __name__ == '__main__':
    main()
