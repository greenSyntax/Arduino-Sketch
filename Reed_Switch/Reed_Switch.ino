
int reedSensor = 2;
int status = 1; // False

void setup() {
  
  Serial.begin(9600);
  pinMode(reedSensor, INPUT);

}

void loop() {

  status = digitalRead(reedSensor);
  if(status == 0) {
    Serial.println("Door Closed");
  }
  else {
    Serial.println("Door Open");
  }
  
  delay(1000);
}
