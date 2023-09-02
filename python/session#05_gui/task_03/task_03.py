#!/usr/bin/python3

################################################### Task #3 description ###################################################
#  Write a program in Python that displays a window to the user that asks them to enter an integer
#  N and displays its factorial
###########################################################################################################################

from tkinter import *

def action():
    number = int(number_data_field.get())
    factorial = 1
    for i in range(1 , number + 1):
        factorial = factorial*i
    label_field_result['text'] = f"The factorial of {number} is {number}! = {factorial}"
    
    
root = Tk()
root.title("Factorial")
root.geometry("420x150")
label_field_number  = Label(root , text = "Enter integer value: ")
label_field_number.place( x = 20 , y = 20)
number_data_field = Entry(root)
number_data_field.place( x = 200 , y = 20 , width = 200)
label_field_result = Label(root , text ="")
label_field_result.place(x = 200 , y = 50 )
button = Button(root, text = "Get the result" , command = action)
button.place(x = 200 , y = 90 , width = 200)

root.mainloop()