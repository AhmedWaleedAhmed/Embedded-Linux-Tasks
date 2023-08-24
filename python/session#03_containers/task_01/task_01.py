#!/usr/bin/python3

################################################### Task #1 description ###################################################
# 1-Make your module that contain favourite websites and have function called Firefox take url and open website
# 2- then make main file and print menu of sites for user and let him choice
###########################################################################################################################

from firelink import *

def main():
    print(f"Select a website to open : [ {', '.join(list(favourite_websites.keys()))} ]")   
    website_name = input().lower().strip()
    while (website_name not in favourite_websites):
        website_name = input("Invalid website.\n").lower().strip()
    firefox(favourite_websites[website_name])

if __name__ == '__main__':
    main()


