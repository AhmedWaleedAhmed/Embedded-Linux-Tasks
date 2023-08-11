#!/usr/bin/python3

# Task #2
# Write code to find automatically bitcoin rate.

import requests

x = requests.get('https://api.coindesk.com/v1/bpi/currentprice.json')

print(x.json()['bpi']['USD']['rate'])