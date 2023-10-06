# PC Control Using Sockets
## Description

This project aims to provide a convenient and efficient way to control your laptop remotely using a mobile application. 
By establishing a socket connection between your laptop and the mobile app, you can perform various actions on your laptop, 
such as opening applications like the `Calendar`, `VS Code`, `Firefox`, `Calculator`, `Emojis`, `Text Editor`, `Todo`, `Terminal`, and finally get your IP.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)

## Installation

- Install the [Tcp Udp Server & Client](https://play.google.com/store/apps/details?id=tcpudpserverclient.steffenrvs.tcpudpserverclient&pcampaignid=web_share) application on your phone.
- Create new client by adding your device IP address and the port number used in the program and choose TCP.
  * to get your IP use the following command: `ifconfig | grep 'inet ' | tail -n 1 | awk '{print $2}'`.
  
  ![image](https://github.com/AhmedWaleedAhmed/Embedded-Linux-Tasks/assets/47499428/209d5dea-1581-4ce7-a58e-e8a40c0ae838)
  ![image](https://github.com/AhmedWaleedAhmed/Embedded-Linux-Tasks/assets/47499428/40060cc3-7a24-40a8-8b8f-eb935c1ba381)
- Run the program on PC and click play button in the app to start connection.
  
  ![image](https://github.com/AhmedWaleedAhmed/Embedded-Linux-Tasks/assets/47499428/a9326a2f-d894-451b-82b7-833a2b81fd37)
- Send and receive data from the screen below.
  
  ![image](https://github.com/AhmedWaleedAhmed/Embedded-Linux-Tasks/assets/47499428/75ef8e70-bbc5-478e-b6d0-6c876d80e41e)
- To run the app on your PC use the following commands:
  * `g++ -g -fno-elide-constructors -O0 main.cpp executor.cpp Socket.cpp`
  * `valgrind --leak-check=full --show-leak-kinds=all ./a.out`

## Usage

We have 2 classes here executor and Socket below you will see the UML Diagram for both of them.

![image](https://github.com/AhmedWaleedAhmed/Embedded-Linux-Tasks/assets/47499428/386e81c6-220b-4f6c-bcd6-c5b02d7b7d02)

The executor class is a C++ class that provides functionality for executing predefined commands. It maintains a database of commands and their corresponding actions. The class allows you to execute commands, execute commands and return the output, show the available commands, and check if a command exists in the database.

The class utilizes the [popen](https://pubs.opengroup.org/onlinepubs/009696799/functions/popen.html) function to execute the commands and retrieve their output.

![image](https://github.com/AhmedWaleedAhmed/Embedded-Linux-Tasks/assets/47499428/182e5494-6644-42cd-86d3-a0b56b2cc5fa)

The Socket class represents a server socket that listens for incoming connections and handles client connections.
