# -*- coding: utf-8 -*-
"""
Created on Wed Mar  7 13:51:36 2018

@author: William
"""

def listmean():
    list1 = []
    num = input("Enter how many numbers do you want to enter:")
    for i in range(int(num)):
        n = input('Please enter your numbers: ')
        list1.append(int(n))
    print (list1)
    
    mean = sum(list1) / float(len(list1))
    print("The mean is: ", mean)
    
listmean()
