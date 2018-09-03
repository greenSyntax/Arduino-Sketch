
#include<SFE_BMP180.h>
#include<Wire.h>

SFE_BMP180 pressure;
double baseline;

void setup() {

  Serial.begin(9600);

  if(pressure.begin()) {
    Serial.println("BMP180 init is success");
  }
  else {
    Serial.println("BMP180 init failed");
    while(1);
  }

  baseline = getPressure();
  Serial.print("Pressure: ");
  Serial.print(baseline);
  Serial.println("mb");
  

}

void loop() {
  // put your main code here, to run repeatedly:

}

double getPressure() {

  char status;
  double T,P, p0, a;

  status = pressure.startTemperature();
  
  if(status != 0) {
    
    delay(status);
    
    status = pressure.getTemperature(T);
    if(status != 0) {

      status = pressure.startPressure(3);
      if(status != 0) {

        delay(status);

        status = pressure.getPressure(P,T);
        
        if(status != 0) {
          return (P);
        }
        else {
          Serial.println("Error on Pressure");
        }
        
      }
      else {
        Serial.println("Error on starting Pressure");
      }
      
    }
    else {
      Serial.println("Error on getting Temperature");
    }
        
  }
  else {
    Serial.println("Error while start Temperature Mesurement");
  }
  
}

