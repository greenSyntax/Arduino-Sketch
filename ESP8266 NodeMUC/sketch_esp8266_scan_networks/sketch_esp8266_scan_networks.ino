#include "ESP8266WiFi.h";

int numberOfnetworks = 0;

void setup() {
  Serial.begin(115200);
  numberOfnetworks = WiFi.scanNetworks();

  Serial.print("Available Network :");
  Serial.println(numberOfnetworks);

  for(int i = 0; i < numberOfnetworks; i++){

    // Wifi Network
    Serial.print("SSID :");
    Serial.println(WiFi.SSID(i));
    Serial.println();

    Serial.print("RSSI :");
    Serial.println(WiFi.RSSI(i));
    Serial.println("---------------");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
