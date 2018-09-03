
// MQ5 Gas Sensor

int sensor = 7;
int gasValue = A0; //D7

void setup() {

  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {

  gasValue = analogRead(sensor);
  Serial.print("MQ5 Value : ");
  Serial.print(gasValue);
  Serial.println("");

  delay(1000);
}
