#!/usr/bin/python3

################################################### Task #2 description ###################################################
# Using “Pyautogui” to open Emails and change Emails from unread to read
###########################################################################################################################

import pyautogui
import time
import os

def open_gmail():
    pyautogui.hotkey('win')
    time.sleep(1)
    pyautogui.typewrite('gmail')
    time.sleep(1)
    pyautogui.hotkey('enter')
    time.sleep(1)

def mark_all_read():
    cwd = os.getcwd()
    try:
        time.sleep(2)
        button_install_location = pyautogui.locateOnScreen(f'{cwd}/select.png', confidence=0.65)
        time.sleep(2)
        button_install_point = pyautogui.center(button_install_location)
        time.sleep(2)
        pyautogui.click(button_install_point.x, button_install_point.y)
    except:
        print (f"Could not find the image")
    try:
        time.sleep(2)
        button_install_location = pyautogui.locateOnScreen(f'{cwd}/mark.png', confidence=0.65)
        time.sleep(2)
        button_install_point = pyautogui.center(button_install_location)
        time.sleep(2)
        pyautogui.click(button_install_point.x, button_install_point.y)
    except:
        print (f"Could not find the image")

def main():
    open_gmail()
    mark_all_read()

if __name__ == "__main__":
    main()