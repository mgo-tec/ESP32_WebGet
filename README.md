# ESP32_WebGet BETA 1.13
This library is for the Arduino core for the ESP32.  
https://github.com/espressif/arduino-esp32  
This Library that gets Web information from ESP32.  
  
My Blog: https://www.mgo-tec.com  
  
# Change log
(1.13)  
Erase Serial.begin (115200) of EWG_AP_Connect function.  
The reason why the WiFi STA can not be connected is double use of Serial.begin.  
  
(1.12)  
When the time can not be acquired with the NTP_Get_Interval function, the internal clock is not set.  
  
(1.1)  
With the EWG_https_Web_Get function, we made it possible to set the root certificate and modified a little to make it easier to get the articles on Yahoo RSS site.  
When the time can not be acquired from the NTP server, we added the function to be retrieved from other server and the following function for automatic periodical acquisition of time from NTP server.  
  
- NTP_OtherServerSelect  
- NTP_Get_Interval  
  
【更新履歴】(Japanese)  
(1.13)  
EWG_AP_Connect関数のSerial.begin(115200) を消去。  
WiFi STA が接続できなくなる原因は、Serial.begin の二重使用でした。  
  
(1.12)  
NTP_Get_Interval 関数で、時刻取得できない場合は内蔵時計をセットしないように修正しました。  
  
(1.1)  
EWG_https_Web_Get関数で、ルート証明書をセットできるようにして、Yahoo RSS サイトの記事を取得し易いように少々修正しました。  
NTPサーバーから時刻取得できなかった時、他のサーバーから取得する関数と、NTPサーバーから時刻を自動定期取得する以下の関数を追加しました。  
  
- NTP_OtherServerSelect  
- NTP_Get_Interval  
  
# Credits and license
*Licensed under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1  
  
Copyright (c) 2017 Mgo-tec  
  
Reference Blog --> https://www.mgo-tec.com  
  
# My Blog: 
Other usage is Japanese, please visit my blog.  
https://www.mgo-tec.com