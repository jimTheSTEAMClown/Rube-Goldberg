// Arduino C++ code - Analog input - if above a value, turn on LED
int LED = 13;
int sensor_input = A0;
int sensor_val = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(sensor_input, INPUT);
}

void loop()
{
  sensor_val = analogRead(sensor_input); // Reads the Switch
  Serial.println(sensor_val);
  if(sensor_val > 400) {  // If the Switch is presed, Turn on LED
    digitalWrite(LED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)    
  }
  else {  // If the Switch is not presed, Turn off LED
    digitalWrite(LED, LOW);    
  } 
  delay(250);
}
