
#include "RTClib.h"

RTC_DS3231 rtc;

void setup() {

  Serial.begin(9600);

  if(!rtc.begin()) {
    Serial.println("Cloudn't find RTC");
    while(1);
  }

  if(rtc.lostPower()) {
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

}

void loop() {

  DateTime now = rtc.now();

  Serial.println(now.year(), DEC);

  delay(1000);

}
