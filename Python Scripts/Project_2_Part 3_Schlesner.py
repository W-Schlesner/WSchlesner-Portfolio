# -*- coding: utf-8 -*-
"""
Created on Sun Feb  4 18:37:39 2018

@author: William
"""

"""
array=[0,10,20,40]
for i in list(reversed(array)):
     print(i)
"""     
 

def count():    
    num_array = list()
    num = input("Enter how many elements you want:")
    print ('Enter numbers in array: ')
    for i in range(int(num)):
        n = input('Please enter your your numbers: ')
        num_array.append(int(n))
        print ('Array Normal: ',num_array)
        print ('Array Backwards: ', list(reversed(num_array)))



count()

def words():    
    char_array = list()
    char = input("Enter how many elements you want:")
    print ('Enter numbers in array: ')
    for i in range(int(char)):
        n = input('Enter your strings: ')
        char_array.append(str(n))
        print ('Array Normal: ',char_array)
        print ('Array Backwards: ', list(reversed(char_array)))



words()