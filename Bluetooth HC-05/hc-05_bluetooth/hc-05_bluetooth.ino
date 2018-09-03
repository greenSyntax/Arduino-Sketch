int redLed= 8; 

char inputState = '0';  
  
void setup() 
{  
  Serial.begin(9600);  

  //Initialize LEDs
  pinMode(redLed, OUTPUT);
}  
  
void loop() 
{  

  if(Serial.available()>0){
  
   inputState= Serial.read();

   if(inputState == '1'){

    digitalWrite(redLed, HIGH);
    Serial.println("LED is ON");
   }
   else if(inputState == '0') {
    
    digitalWrite(redLed, LOW);
    Serial.println("LED is OFF");
   }
   
  }
       
}  
