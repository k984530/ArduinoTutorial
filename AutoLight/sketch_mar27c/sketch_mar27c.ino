#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#define FIREBASE_HOST "iotlight-daf0f-default-rtdb.firebaseio.com/"
#define FIREBASE_AUTH "jXqg1BfqhlaTbJpJ5ce9zdTYLApMOfIIwmizubOo"
#define WIFI_SSID "2017253020"
#define WIFI_PASSWORD "k71300929!"


WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println();
  Serial.print("Connecting to Wi-Fi");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
 static int cnt = 0;
 static unsigned long prevTime = 0;
 static unsigned long nowTime = 0;

  timeClient.update();
  Serial.println(timeClient.getFormattedTime());
  delay(1000);
}
