// ============================================================================
// Source: STEAM Clown - www.steamclown.org 
// GitHub: https://github.com/jimTheSTEAMClown/Rube-Goldberg
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist 
// This example code under the GNU Lesser General Public License v3.0
// and any docs and lesson examples is licensed under the CC BY-NC-SA 3.0.
// https://creativecommons.org/licenses/by-nc-sa/3.0/
// Create Date:			02/23/2022 
// Design Name:			Rube-Goldberg-IF-ELSE-IF-ELSE-STEAMClown
// Description:     adaptation of blink on http://arduino.cc/
// Dependencies: 
// Revision: 
// Revision 0.03 - Updated for RubeGoldberg Workshop - 02/23/2022
// Revision 0.02 - Updated for SVCTE Mechatronics Class - 02/23/2022
// Revision 0.01 - Created 02/23/2022
// Additional Comments: 
//
// ============================================================================
// Example Of “Ask A Question, Get 2 Answers/Choices” Program
// Shows and IF / ELSE IF, ELSE example
// Change this number to bigger or smaller than 12
int x = 7;

void setup() {
  Serial.begin(9600);           // Use Serial Monitor to debug
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // Example of reading a number from the serial port console
  // Hint: Serial.parseInt() ignores letters
  // Uncomment these next 3 lines for get User data from console
  // Serial.println("Enter a number > ");  
  // while (Serial.available() == 0) {} //Wait for user input
  // x = Serial.parseInt(); //Reading the Input string from Serial port. 
 
  // Example of a simple IF / ELSE IF /ELSE statement. 
  // Change the value of "x" above and rerun code to see which of 
  // the IF, ELSEIF and ELSE statement based on what value of "x" is.
  
  Serial.print("The value of x = "); 
  Serial.println(x);    
  if(x > 12)
  {
    Serial.print("The number "); 
    Serial.print(x); 
    Serial.println(" is bigger than 12");
  }
  else if (x < 12)
  {
    Serial.print("The number "); 
    Serial.print(x); 
    Serial.println(" is smaller than 12");   
  } 
  else
  {
    Serial.print("The number "); 
    Serial.print(x); 
    Serial.println(" is equal to 12");
  }
}
