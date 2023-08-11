#!/usr/bin/python3

# Task #1
# Find the largest item from a given list using loop.

n = int(input("Enter number of elements : "))
a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
print("The largest number is {}".format(max(a)))