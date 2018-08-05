/********************************************************************/

#include <OneWire.h> 
#include <DallasTemperature.h>

/********************************************************************/

#define ONE_WIRE_BUS 2            // Data wire is plugged into pin 2 on the Arduino 

/********************************************************************/

OneWire oneWire(ONE_WIRE_BUS);    // Setup a oneWire instance to communicate with any OneWire devices  
 
/********************************************************************/
 
DallasTemperature sensors(&oneWire);  // Pass our oneWire reference to Dallas Temperature.

/********************************************************************/ 

void setup(void) 
{ 
 // start serial port 
 Serial.begin(9600); 
 Serial.println("Starting up library for sensors..."); 
 // Start up the library 
 sensors.begin(); 
} 
void loop(void) 
{ 

// sensors.requestTemperatures() issues a temperature request 
// If there are more than on device on the bus this request goes out
// to all of the devices.
/********************************************************************/

 Serial.print(" Requesting temperature(s)..."); 
 sensors.requestTemperatures(); // Send the command to get temperature readings 
 Serial.println("DONE"); 
 
/********************************************************************/

 Serial.print("Temperature is: "); 
 Serial.print(sensors.getTempCByIndex(0)); // Why "byIndex"?  
   // Since you can have more than one DS18B20 on the same bus,  
   // 0 refers to the first IC on the wire, and would go from there 
   delay(1000); 
} 
