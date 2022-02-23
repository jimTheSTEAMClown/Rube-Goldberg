// ============================================================================
// Source: STEAM Clown - www.steamclown.org 
// GitHub: https://github.com/jimTheSTEAMClown/Rube-Goldberg
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist 
// This example code under the GNU Lesser General Public License v3.0
// and any docs and lesson examples is licensed under the CC BY-NC-SA 3.0.
// https://creativecommons.org/licenses/by-nc-sa/3.0/
// Create Date:			02/23/2022 
// Design Name:			Rube-Goldberg-IF-STEAMClown
// Description:     adaptation of blink on http://arduino.cc/
// Dependencies: 
// Revision: 
// Revision 0.03 - Updated for RubeGoldberg Workshop - 02/23/2022
// Revision 0.02 - Updated for SVCTE Mechatronics Class - 02/23/2022
// Revision 0.01 - Created 02/23/2022
// Additional Comments: 
//
// ============================================================================
// Example “Ask A Question” IF Example Program
int sensor_state = 1;

void setup() {
  Serial.begin(9600);           // Use Serial Monitor to debug
  // Example of a simple IF statement. 
  // Change the value of "sensor_state" above and rerun code
  // it see the IF statement run
  Serial.print("The value of sensor_state = "); 
  Serial.println(sensor_state);    
  if(sensor_state > 0)
  {
    Serial.print("The Sensor value "); 
    Serial.print(sensor_state); 
    Serial.println(" is True");
  }
  Serial.println("Done");
}

void loop() {
  // put your main code here, to run repeatedly:

}
