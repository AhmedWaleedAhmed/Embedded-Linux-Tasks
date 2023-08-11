#!/usr/bin/python3

# Task #1
# Write a Python program to count the number 4 in a given list.

n = int(input("Enter number of elements : "))
a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
count = a.count(4)
print(f"\nNumber 4 appeared {count} times in the list")