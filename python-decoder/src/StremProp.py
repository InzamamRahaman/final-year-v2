'''
Created on Mar 27, 2015

@author: school
'''

import enum



class StreamPop(enum.Enum):
    scenario1 = 1
    scenario2 = 2
    scenario3 = 3
    scenario4 = 4


def compute_case(bits):
    length = len(bits)
    checker = ''.join([str(0)] * length)
    if bits == checker:
        return StreamPop.scenario1
    elif bits[0 : length - 2] == checker[0 : length - 2] and bits[length - 1] == 1:
        return StreamPop.scenario2
    elif bits[0 : length - 2] != checker[0 : length - 2] and bits[length - 1] == 1:
        return StreamPop.scenario3
    return StreamPop.scenario4
