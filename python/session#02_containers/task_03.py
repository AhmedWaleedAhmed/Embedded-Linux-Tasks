#!/usr/bin/python3

# Task #3
# Write code to add a shortcut on your system.

import keyboard
import subprocess

def on_trigger():
    subprocess.run(['nautilus', '/home/ahmed/Desktop'])

def shortcut_listener ():
    shortcut = "ctrl + alt + s"
    keyboard.add_hotkey(shortcut, on_trigger)
    keyboard.wait()

shortcut_listener()

