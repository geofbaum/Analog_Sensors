/* Basic Code for Analog Temp Sensor
*
*  Could be used for Arduino or RaspbPi as long as Python depos are installed.
*  Will be added to and joined with other sections of code in the future.
*  
*  Written by Geoffrey Baum, 2016.
*/
float tempC;
int reading;
int tempPin = A0;  // Set to whichever Analog Pin is attached to the Data Pin
 
void setup() 
{
  analogReference(INTERNAL);
  Serial.begin(9600);
  delay(10);
}
void loop() 
{
  // Wait a few seconds between measurements.
  delay(60000); // 2 minute delay (120000) 1 minute delay (60000)
  
 reading = analogRead(tempPin);
 // float millivolts = (reading/1024.0) * 3300;
 // tempC = millivolts/10;
 // tempC = (5.0 * reading * 100.0)/1024;
 tempC = reading/9.31;
 
  // Check if any reads failed and exit early (to try again).
  if (isnan(tempC)) 
  {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("LM35 Temp");
  Serial.print(tempC);
}
