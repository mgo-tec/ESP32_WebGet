/*
  ESP32_WebGet.h
  Beta version 1.14

Copyright (c) 2017 Mgo-tec

This library is used by the Arduino IDE(Tested in ver1.8.2).

Reference Blog --> https://www.mgo-tec.com

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

Reference LGPL-2.1 license statement --> https://opensource.org/licenses/LGPL-2.1   

Download and use the following library.
Time Library URL:
https://github.com/PaulStoffregen/Time

WiFi.h - Included WiFi library for esp32
Based on WiFi.h from Arduino WiFi shield library.
Copyright (c) 2011-2014 Arduino.  All right reserved.
Modified by Ivan Grokhotkov, December 2014
Licensed under the LGPL-2.1

WiFiClientSecure.h
Copyright (c) 2011 Adrian McEwen.  All right reserved.
Additions Copyright (C) 2017 Evandro Luis Copercini.
Licensed under the LGPL-2.1

WiFiUdp.h
Copyright (c) 2008 Bjoern Hartmann
Licensed under the MIT.

*/

#ifndef _ESP32_WEBGET_H_INCLUDED
#define _ESP32_WEBGET_H_INCLUDED

#include <Arduino.h>
//#include <esp32-hal-log.h> //log_v出力用
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <WiFiUdp.h>
#include <TimeLib.h> //Arduino time library ver1.5

time_t EWG_Get_Ntp_Time();
void EWG_Send_NTP_Packet(IPAddress &address);

extern const char *_ssid;
extern const char *_password;

class ESP32_WebGet
{
public:
  ESP32_WebGet();

  void EWG_AP_Connect(const char *ssid, const char *password);
  void EWG_NTP_init(int timezone, const char *NtpServerName);
  void EWG_NTP_TimeLib_init(int timezone, const char *NtpServerName);

  String EWG_Web_Get(const char* host0, String target_ip, char char_tag, String Final_tag, String Begin_tag, String End_tag, String Paragraph);
  String EWG_https_Web_Get(const char* host1, String target_ip, char char_tag, String Final_tag, String Begin_tag, String End_tag, String Paragraph);
  String EWG_https_Web_Get(const char *root_ca, const char* host1, String target_ip, char char_tag, String Final_tag, String Begin_tag, String End_tag, String Paragraph);
  String https_get(const char *Root_Ca, uint8_t rca_set, const char* Host, String t_ip, char c_tag, String F_tag, String B_tag, String E_tag, String Pph);

  void WeatherJ_font_num(String str, uint8_t wDay, uint8_t Htime, uint8_t Fnum[3], uint8_t col[3][3]);
  void NTP_OtherServerSelect(uint8_t timezone);
  void NTP_Get_Interval(uint32_t interval);

private:
  uint32_t _LastNTPtime = 0;

};

#endif