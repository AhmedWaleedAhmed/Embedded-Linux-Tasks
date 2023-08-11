#!/usr/bin/python3
# Task #2
# Write a Python program to test whether a passed letter is a vowel or not.

vowels = "auieo"
letter = input("Enter your letter:: ").strip().lower()
print("\nit's a vowel") if letter in (vowels) else print("\nit's not a vowel")