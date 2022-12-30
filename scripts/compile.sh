#! /usr/bin/bash

# Great resource for setup
# https://ericslenk.com/posts/getting-started-with-the-nodemcu-esp8266-and-arduino-cli

arduino-cli compile --fqbn $2 $1 --libraries /home/mom/Arduino/libraries/Adafruit_MPU6050,/home/mom/Documents/Arduino/libraries/Networking
