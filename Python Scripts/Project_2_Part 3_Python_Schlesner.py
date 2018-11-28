# -*- coding: utf-8 -*-
"""
Created on Sun Feb  4 18:37:39 2018

@author: William Schlesner
"""

 

def count():    
    num_array = list()
    num = input("Enter how many elements you want:")
    print ('Enter numbers in array: ')
    for i in range(int(num)):
        n = input('Please enter your numbers: ')
        num_array.append(int(n))
    print ('Array Normal: ',num_array)
    print ('Array Backwards: ', list(reversed(num_array)))

def words():    
    char_array = list()
    char = input("Enter how many elements you want:")
    print ('Enter numbers in array: ')
    for i in range(int(char)):
        n = input('Enter your strings: ')
        char_array.append(str(n))
    print ('Array Normal: ',char_array)
    print ('Array Backwards: ', list(reversed(char_array)))

def dictionary ():
    key_array = list()
    val = input("Enter how many elements you want:")
    for i in range(int(val)):
        n = input('Enter your Keys: ')
        key_array.append(str(n))
    val_array = list()
    for i in range(int(val)):
        n = input('Enter your Values: ')
        val_array.append(str(n))
    dictionary = dict(zip(key_array, val_array))
    print(dictionary)

print ('First Function\n')
count()
print ('Second Function\n')
words()
print ('Thrid Function\n')
dictionary()