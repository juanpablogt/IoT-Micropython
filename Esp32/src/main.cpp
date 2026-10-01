#include <Arduino.h>

// put function declarations here:
#define pinLed 2

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
}

void loop() {
  digitalWrite(pinLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(pinLed, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
