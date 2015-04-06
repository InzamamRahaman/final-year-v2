'''
Created on Mar 21, 2015

@author: school
'''

class FifoQueue(object):
    
    def __init__(self):
        self.elements = []
       
    def insert(self, elem):
        self.elements.append(elem)
    
        
    def get(self):
        if len(self.elements) > 0:
            temp = self.elements[0]
            self.elements = self.elements[1 : ]
            return temp
        return None
    
    def __iter__(self):
        return self
    
    def next(self):
        temp = self.get()
        if temp:
            return temp
        else:
            raise StopIteration
    
    def is_empty(self):
        return len(self.elements) == 0
