# -*- coding: utf-8 -*-
"""
Created on Sun Feb  20 18:55:39 2018

@author: William Schlesner
"""

 
def dictionary ():
    """Step 1"""
    key_array = list()
    print("Enter 5 Keys:")
    for i in range(int(5)):
        n = input('Enter your 5 Keys: ')
        key_array.append(str(n))
    val_array = list()
    for i in range(int(5)):
        n = input('Enter your 5 Values: ')
        val_array.append(str(n))
    dictionary = dict(zip(key_array, val_array))
    print(dictionary)
    
    """Step 2"""
    x = input('Enter another Key to add to the dictionary: ')
    y = input('Enter another Value to go with that Key: ')
    dictionary.update(dict(zip(x, y)))
    print(dictionary)
    
    """Step 3"""
    r = input('What key would you like to change the value? ')
    t = input('What would you like the new value to be? ')
    def replace_value_with_definition(key_to_find, definition):
        for key in dictionary.keys():
            if key == key_to_find:
                dictionary[key] = definition
    replace_value_with_definition(r, t)
    print(dictionary)
    
    """Step 4"""
    for i in range(int(3)):
        key = input('What key would you like to print the value for? ')
        print (dictionary[key])
        
    """Step 5"""
    for i in range(int(3)):
        lookup = input("Enter the Value you want to find the Key for: ")
        print(list(dictionary.keys())[list(dictionary.values()).index(lookup)])
    
    """Step 6"""
    remove_key = input('What key would you like to remove? ')
    del dictionary[remove_key]
    print(dictionary)   
    
    """Step 7"""
    for i in range(int(3)):
        test_key = input("Enter the key you want to test for: ")
        if test_key in dictionary:
            print("The Key is in the dictionary\n")
        else:
            print("The Key is not in the dictionary\n")
        
    """Step 8"""
    for i in dictionary:
        print(i,",",dictionary[i])
    
    

dictionary()