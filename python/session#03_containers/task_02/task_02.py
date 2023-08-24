#!/usr/bin/python3

################################################### Task #2 description ###################################################
# 1- Write a code to suggest automatically activates for you 
# hint : use this url for suggestions :  https://www.boredapi.com/api/activity
# 2- Write a code to Get your ip
# hint: Get your public IP : https://api.ipify.org/?format=json
# 3- Write a code to Get your location
# hint : Get your location : https://ipinfo.io/<YOUR_IP>/geo
###########################################################################################################################

import requests

url = requests.get("https://www.boredapi.com/api/activity")
print(f"I suggest you to do the following activity: {url.json()['activity']}, which is an activity of type: {url.json()['type']}")

ip_url = requests.get("https://api.ipify.org/?format=json")
print(f"My IP is:: {ip_url.json()['ip']}")

url = requests.get(f"https://ipinfo.io/{str(ip_url.json()['ip'])}/geo")
print(f"My Location is:: {url.json()}")


