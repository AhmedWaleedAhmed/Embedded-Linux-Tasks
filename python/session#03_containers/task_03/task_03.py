#!/usr/bin/python3

################################################### Task #3 description ###################################################
# Using PyAutoGUI 
# - To open vscode 
# - install clangd from extension
# - install c++ testmate  from extension
# - install c++ helper  from extension
# - install cmake  from extension
# - install cmake tools  from extension
###########################################################################################################################

################################################### Dependencies ###################################################
# pyautogui docs: https://pyautogui.readthedocs.io/en/latest/install.html
# We need to run the following commands before running this script
# 1- sudo python3 -m pip install pyautogui
# 2- sudo apt-get install scrot
# 3- sudo apt-get install python3-tk
# 4- sudo apt-get install python3-dev
# Also, We need to run Ubuntu on Xorg to make things work for more information see the following link: https://askubuntu.com/questions/1433002/ubuntu-gui-cant-take-virtual-keystrokes#:~:text=The%20reason%20it,pyautogui%20on%20Wayland.
# Also, We need to install OpenCV, or everything will be working except the `locateOnScreen` method will not be working.
# 5- sudo apt install python3-opencv -y
####################################################################################################################

# FYI
# As a safety feature, a fail-safe feature is enabled by default. When a PyAutoGUI function is called,
# if the mouse is in any of the four corners of the primary monitor, they will raise a pyautogui.FailSafeException.
# Ref: https://pyautogui.readthedocs.io/en/latest/index.html?highlight=failsafe#fail-safes

import pyautogui
import time
import os

def open_vscode():
    pyautogui.hotkey('win')
    time.sleep(1)
    pyautogui.typewrite('vscode')
    time.sleep(1)
    pyautogui.hotkey('enter')
    time.sleep(1)

def download_extension(extension_name):
    cwd = os.getcwd()
    time.sleep(1)
    pyautogui.hotkey('ctrl', 'shift', 'X')
    time.sleep(1)
    pyautogui.hotkey('ctrl', 'a')
    time.sleep(1)
    pyautogui.hotkey('del')
    time.sleep(1)
    pyautogui.typewrite(extension_name)
    button_install_location = None
    try:
        time.sleep(3)
        button_install_location = pyautogui.locateOnScreen(f'{cwd}/test.png', confidence=0.65)
        time.sleep(2)
        button_install_point = pyautogui.center(button_install_location)
        time.sleep(2)
        pyautogui.click(button_install_point.x, button_install_point.y)
    except:
        print (f"Extension with ID: {extension_name} might be already installed.")
    time.sleep(2)
    pyautogui.hotkey('ctrl', 'shift', 'E')
    time.sleep(3)

def main():
    extension_id_list = [ 'llvm-vs-code-extensions.vscode-clangd', 'matepek.vscode-catch2-test-adapter', 'amiralizadeh9480.cpp-helper', 'twxs.cmake', 'ms-vscode.cmake-tools' ]    
    open_vscode()
    for extension_id in extension_id_list:
        download_extension(extension_id)

if __name__ == "__main__":
    main()