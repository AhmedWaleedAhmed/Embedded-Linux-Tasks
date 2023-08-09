#!/usr/bin/python3

# Task #1
# Write a Python program to count the number 4 in a given list.

# n = int(input("Enter number of elements : "))
# a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
# count = a.count(4)
# print(f"\nNumber 4 appeared {count} times in the list")
#############################################################################################################
# Task #2
# Write a Python program to test whether a passed letter is a vowel or not.

# vowels = ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U')
# letter = input("Enter your letter:: ")
# print("\nit's a vowel") if letter in (vowels) else print("\nit's not a vowel")
#############################################################################################################
# Task #3
# Write a python program to access environment variables.
# import os

# path = os.environ['PATH']
# print(path)
#############################################################################################################
# Task #4
# Write a Python program which accepts the radius of a circle from the user and compute the area.

# from math import pi
# r=float(input("Enter the radius:: "))
# area=pi*r**2 
# print("The area of circle is",end=":: ") 
# print(area)
#############################################################################################################
# Task #5
# Print the calendar of a given month and year

# import calendar
# y = int(input("Input the year : "))
# m = int(input("Input the month : "))
# print(calendar.month(y, m))
#############################################################################################################
# Task #6
# simple login system in python

users = {'Ahmed': '1394', 'Ali': '6078', 'Amr': '9345'}  
  
username = input("Enter your username: ")  
password = input("Enter your password: ")  

if username in users and users[username] == password:  
    print("Login successful!")  
else:  
    print("Invalid username or password. Please try again.")  