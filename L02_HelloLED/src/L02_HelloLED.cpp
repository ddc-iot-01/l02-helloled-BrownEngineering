/* 
 * Project L02_HelloLED
 * Author: Benjamin Brown
 * Date: 06102025
 * LED project the first
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


void setup() {
  pinMode(D1, OUTPUT);
}

void loop() {
digitalWrite(D1, HIGH);
delay(1000);
digitalWrite(D1, LOW);
delay(1000);
}
