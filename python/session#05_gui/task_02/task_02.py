#!/usr/bin/python3

################################################### Task #2 description ###################################################
#  Create a window with a canvas (circle) and change its color when you press on the buttons
#  We will have two states 1- LED ON 2- LED OFF
#  Also We will have label to indicate if the LED ON/OFF
###########################################################################################################################

# Ref: https://stackoverflow.com/questions/31128780/tkinter-how-to-make-a-button-center-itself

from tkinter import *

canvas_width = 100
canvas_height = 100
radius = 30

def Led_on():
    canvas.itemconfig(circle, fill='red')
    label_field['text'] = "Led is ON"
def Led_off():
    canvas.itemconfig(circle, fill='white')
    label_field['text'] = "Led is OFF"

root = Tk()
root.title("LED ON/OFF")
root.geometry("300x400")
frame = Frame(root)
frame.place(relx=0.5, rely=0.5, anchor=CENTER)
canvas = Canvas(frame, width=canvas_width, height=canvas_height)
canvas.pack()
x0 = (canvas_width / 2) - radius
y0 = (canvas_height / 2) - radius
x1 = (canvas_width / 2) + radius
y1 = (canvas_height / 2) + radius
circle = canvas.create_oval(x0, y0, x1, y1, width=4, fill='white')
label_field = Label(root , text ="Led is OFF")
label_field.place(relx=0.5, rely=0.8, anchor=S)
button = Button(root, text = "Led ON" , command = Led_on)
button.place(relx=0.5, rely=0.9, anchor=S)
button = Button(root, text = "Led OFF" , command = Led_off)
button.place(relx=0.5, rely=1.0, anchor=S)
root.mainloop()
