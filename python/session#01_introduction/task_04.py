#!/usr/bin/python3
# Task #4
# Write a Python program which accepts the radius of a circle from the user and compute the area.

from math import pi
r=float(input("Enter the radius:: "))
area=pi*r**2 
print("The area of circle is",end=":: ") 
print(area)