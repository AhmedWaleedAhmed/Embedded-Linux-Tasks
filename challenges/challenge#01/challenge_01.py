#!/usr/bin/python3

################################################### challenge #1 description ###################################################
# Create python script which whenever you make  copy for text ,
# it stores that and upon presseing alt+shift+s it will append what is stored into your notes.txt
###########################################################################################################################

################################################### Dependencies ###################################################
# Pyperclip’s documentation: https://pyperclip.readthedocs.io/en/latest/#welcome-to-pyperclip-s-documentation
# We need to run the following commands before running this script
# 1- sudo apt-get install xsel          # to install the xsel utility.
# 2- sudo apt-get install xclip         # to install the xclip utility.
# 3- pip install gtk                    # to install the gtk Python module.
# 4- pip install PyQt4                  # to install the PyQt4 Python module.
####################################################################################################################

# FYI:
# You might face an error related to the following "Pyperclip could not find a copy/paste mechanism for your system."
# illustration: https://stackoverflow.com/questions/51662213/cant-get-pyperclip-to-use-copy-and-paste-modules-on-python3#:~:text=The%20clipboard%20is%20part%20of%20your%20GUI.%20But%20you%20don%27t%20have%20a%20GUI.%20So%20there%20is%20no%20clipboard%20to%20copy%20and%20paste%20with.%20There%20is%20no%20clipboard%20for%20pyperclip%20to%20access%2C%20so%20it%20doesn%27t%20matter%20how%20you%20try%20to%20access%20it%2C%20you%27re%20going%20to%20fail.
# solution: sudo apt-get install xclip

# File Handling in Python: https://www.freecodecamp.org/news/file-handling-in-python/#:~:text=files%20in%20Python.-,File%20Handling%20in%20Python,-File%20handling%20is

# Python Get Current time: https://www.programiz.com/python-programming/datetime/current-time


import keyboard
import pyperclip
import os
import time

def on_trigger():
    cwd = os.getcwd()
    if len(pyperclip.paste()) > 0:
        with open(f'{cwd}/notes.txt', 'a+') as f:
            f.write(f'[{time.strftime("%b-%d-%Y %H:%M:%S %z", time.localtime())}] :: {pyperclip.paste()}\n')

def listen_for_shortcut():
    shortcut = "alt + shift + s"
    keyboard.add_hotkey(shortcut, on_trigger)
    keyboard.wait()

if __name__ == "__main__":
    listen_for_shortcut()