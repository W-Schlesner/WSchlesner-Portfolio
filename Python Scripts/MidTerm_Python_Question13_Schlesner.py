# -*- coding: utf-8 -*-
"""
Created on Wed Mar  7 13:46:50 2018

@author: William
"""

def count(string):
    
    my_string = string.lower().split()
    my_dict = {}
    for item in my_string:
        if item in my_dict:
            my_dict[item] += 1
        else:
            my_dict[item] = 1
    print(" ")
    print(my_dict)


 
string = input("Enter the string you want to sort through: ")
punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
no_punct = ""
for char in string:
    if char not in punctuations:
        no_punct = no_punct + char


count(no_punct)




