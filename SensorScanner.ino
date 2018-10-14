#include <Wire.h>

void setup() {
Serial.begin(115200);
Serial.print(" ");

Serial.print("I2C address Scanner...");

byte counter = 0;

Wire.begin();

for(byte i = 7; i < 120; i++){
  if(Wire.endTransmission() == 0){
    Serial.print("Found Address: ");
    Serial.print(i, DEC);
    Serial.print(" (0x");
    Serial.print(i, HEX);
    Serial.println(")");

    counter++;
    delay(2);
    } 
  }
  Serial.println("Finished!");
  Serial.print("Found ");
  Serial.print(counter, DEC);
  Serial.println(" Sensor(s) connected.");
}

void loop() {
//just to enable a commit on the repo
}
