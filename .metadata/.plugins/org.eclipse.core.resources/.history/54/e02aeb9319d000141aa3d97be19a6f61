'''
Created on Mar 21, 2015

@author: school
'''

class OrganizingList(object):

    def __init__(self, max_list_size = 4):
        self.elements = [-1] * max_list_size
        self.num_elements = 0
        self.max_size = max_list_size
        
    def migrate_down(self, lo, hi):
        for idx in range(hi, lo - 1, -1):
            self.elements[idx] = self.elements[idx - 1]
    
    def find(self, elem):
        for (idx, element) in enumerate(self.elements):
            if element == elem:
                return idx
        return -1
    
    def insert(self, elem):
        location = self.find(elem)
        if location == -1:
            self.elements[1 : ] = self.elements[0 : (self.num_elements - 1)]
            self.elements[0] = elem
            return 0
        elif location == 0:
            return 1
        for idx in range(location, 0, -1):
            temp = self.elements[idx]
            self.elements[idx] = self.elements[idx - 1]
            self.elements[idx - 1] = temp
        return location + 1
        
            
            
                
                
            