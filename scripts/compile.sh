#! /usr/bin/bash

# Great resource for setup
# https://ericslenk.com/posts/getting-started-with-the-nodemcu-esp8266-and-arduino-cli

arduino-cli compile --fqbn esp8266:esp8266:nodemcuv2 $1 --verbose --libraries /home/mom/Documents/arduino-lib/Adafruit_MPU6050/
