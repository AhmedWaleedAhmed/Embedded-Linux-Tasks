#!/usr/bin/python3

################################################### Task #1 description ###################################################
# Write python code to generate Init function of GPIO for AVR
###########################################################################################################################

NUM_BITS = 8
ddra_str = "0b"
for indx in range(NUM_BITS):
    ddra_str += ("0" if str(input(f"Please enter Bit {indx} mode: ")).strip().lower() == "in" else "1")

with open("init.c", "+w") as f: 
    f.write("void Init_PORTA_DIR (void)\n{ \n\tasdasd = %s \n}"% ddra_str)