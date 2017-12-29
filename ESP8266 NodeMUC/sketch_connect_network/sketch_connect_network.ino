#include "ESP8266WiFi.h";

// Set Credentials of Your Desired WiFi
const char* ssid = "GreenSyntax";
const char* passkey = "helloWorld";

void setup() {

  Serial.begin(115200); 

  // Connect to WiFi
  WiFi.begin(ssid, passkey);

  Serial.print("Connecting to ");
  Serial.print(ssid);
  
  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(".");
  }
  
  Serial.print("Connected with IP ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
