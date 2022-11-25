#pragma once

#include <Arduino.h>
#include <ESP8266WiFi.h>


class Net {

public:
  static void DHCPConnect(const char* ssid, const char* password);
  static void StaticConnect(const char* ssid, const char* password);
};