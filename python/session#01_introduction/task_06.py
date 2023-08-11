#!/usr/bin/python3
# Task #6
# simple login system in python

users = {'Ahmed': '1394', 'Ali': '6078', 'Amr': '9345'}  
  
username = input("Enter your username: ")  
password = input("Enter your password: ")  

if username in users and users[username] == password:  
    print("Login successful!")  
else:  
    print("Invalid username or password. Please try again.")  