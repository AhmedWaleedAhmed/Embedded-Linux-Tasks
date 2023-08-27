#!/usr/bin/python3

################################################### Task #4 description ###################################################
# Python program to parse header file and read all prototypes of function and insert it into
# excel sheet with unique ID start with IDX0
###########################################################################################################################
from openpyxl import Workbook

def parse_header_file(file_name):
    lines = []
    with open(file_name, "r") as f:
        lines = f.readlines()
    while("\n" in lines):
        lines.remove("\n")
    data = [["prototypes", "ID"]]
    for indx in range(len(lines)):
        data.append([lines[indx], f"IDX{indx}"])

    return data

def write_excel_file(file_name, data):
    wb = Workbook()
    ws = wb.active
    for row in data:
        ws.append(row)
    wb.save(file_name)
    wb.close()

def main():
    parsed_data = parse_header_file("file.h")
    write_excel_file("parsed_file.xlsx", parsed_data)

if __name__ == "__main__":
    main()