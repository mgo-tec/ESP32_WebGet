# ESP32_WebGet BETA 1.15
This library is for the Arduino core for the ESP32.  
https://github.com/espressif/arduino-esp32  
This Library that gets Web information from ESP32.  
  
別途Timeライブラリが必要です。  
以下のリンクよりダウンロードして、Arduino IDE にインストールしてください。  
Download and use the following library.  
- Time Library URL:  
https://github.com/PaulStoffregen/Time  
  
  
【更新履歴】(Japanese)  
(1.15)  
Yahoo Japan RSS天気予報の配信が2022/03/31で終了したため、その関連関数を削除し、気象庁から天気予報データを取得する関数を新たに作りました。  
詳しくは、以下の記事の【追記】項目をご覧ください。  
[https://www.mgo-tec.com/blog-entry-esp32-oled-ssd1331-yahoo-news-weather-watch-gadget.html](https://www.mgo-tec.com/blog-entry-esp32-oled-ssd1331-yahoo-news-weather-watch-gadget.html)  
  
(1.14)  
https_get関数を修正。  
これで再接続失敗問題が多少解消されると思う。  
  
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