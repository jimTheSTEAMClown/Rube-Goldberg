// C++ code - Servo Lab to move a servo from pos 0 to pos 120//
int LED = 13;
// int sensor_input = A0;
// int sensor_val = 1;

#include <Servo.h> // Import Servo Library
// create servo object to control a servo
// my_servo can be any name. 
// Twelve servo objects can be on most Arduino boards
Servo my_servo; 
int pos = 0; // variable to store the servo position


void setup()
{
  Serial.begin(9600);
  // pinMode(LED, OUTPUT);
  // pinMode(sensor_input, INPUT);
  my_servo.attach(9); // Servo on pin 9 to servo object 
  pos = 0; // Set position Variable
  my_servo.write(pos); // Set the default start position
  delay(1000); // Delay just a bit to get into position

}

void loop()
{
  digitalWrite(LED, LOW);
  my_servo.write(0);
  delay(3000); 

  digitalWrite(LED, HIGH); 
  my_servo.write(120);
  delay(3000);  

}
