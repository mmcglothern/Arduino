const int led=3; // variable which stores pin number

void setup() 
{
  pinMode(led, OUTPUT);  //configures pin 3 as OUTPUT
    Serial.begin(9100);          //  setup serial
}

void loop() 
{
   int sensor_value = analogRead(A0);
   Serial.println(sensor_value);             // debug value

  if (sensor_value < 300)// the point at which the state of LEDs change 
    { 
            digitalWrite(led,LOW);  //Sets LEDs OFF

    }
  else
    {
      digitalWrite(led, HIGH);  //sets LEDs ON
      delay(100);   
      digitalWrite(led, LOW);  //sets LEDs ON
      delay(100);  
      digitalWrite(led, HIGH);  //sets LEDs ON
      delay(100); 
      digitalWrite(led, LOW);  //sets LEDs ON
      delay(100);  
      digitalWrite(led, HIGH);  //sets LEDs ON
      delay(100);   
      digitalWrite(led, LOW);  //sets LEDs ON
      delay(100);  
    }

}
