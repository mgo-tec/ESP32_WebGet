# ESP32_WebGet BETA 1.1
This library is for the Arduino core for the ESP32.  
https://github.com/espressif/arduino-esp32  
This Library that gets Web information from ESP32.  
  
My Blog: https://www.mgo-tec.com  
  
# Change log
(1.1)  
With the EWG_https_Web_Get function, we made it possible to set the root certificate and modified a little to make it easier to get the articles on Yahoo RSS site.  
When the time can not be acquired from the NTP server, we added the function to be retrieved from other server and the following function for automatic periodical acquisition of time from NTP server.  
  
- NTP_OtherServerSelect  
- NTP_Get_Interval  
  
【更新履歴】(Japanese)  
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