# -*- coding: utf-8 -*-
"""
Created on Wed Mar  7 13:51:23 2018

@author: William
"""

import math
 
def mean(numbers):
    total = 0
    for x in numbers:
        total += x
    return (total/len(numbers))

def sd(numbers, mean):
    total = 0
    numbers.sort()
    for x in numbers:
        total +=((x - mean)**2)
    sdNumber = math.sqrt(total/(len(numbers)-1))
    return (sdNumber)

myList = [98, 127, 133, 147, 170, 197, 201, 211, 255]
mean = mean(myList)
sdNumber = sd(myList, mean)
print(sdNumber)