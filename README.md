# Arduino Sketches


### HC-05 Module
This is a Bluetooth module which communicate over Serials.

```
// Check whether Serial is available or not
if(Serial.available()>0){

 // Read Data from Serial
 inputState= Serial.read(); // Return Character

 if(inputState == '1'){

   // DO YOUR ACTION WHEN VALUE IS 1

 }
 else if (inputState == '0'){

   // DO YOUR ACTION WHEN VALUE IS 0
 }

}

```

### ESP8266 NodeMUC

* Scan Near By Networks

```
// Set Baud Rate
Serial.begin(115200);

// Returns Number of Networks
int numberOfnetworks = WiFi.scanNetworks();

Serial.print("Available Network :");
Serial.println(numberOfnetworks);

// Itterate via all
for(int i = 0; i < numberOfnetworks; i++){

  // Wifi SSID Name
  Serial.println(WiFi.SSID(i));

  // RSSI
  Serial.println(WiFi.RSSI(i));
}


```
