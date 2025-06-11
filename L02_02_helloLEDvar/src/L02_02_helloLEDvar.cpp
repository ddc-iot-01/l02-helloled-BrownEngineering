/* 
 * Project L02_02_helloLEDvar
 * Author: Benjamin Brown
 * Date: 06102025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

SYSTEM_MODE(AUTOMATIC);
const int LEDPIN = D1;
const int LEDDELAY = 1000; 
int i;

void setup() {
  pinMode(LEDDELAY, OUTPUT);
}

void loop() {
digitalWrite(LEDPIN, HIGH);
delay(LEDDELAY);
digitalWrite(LEDPIN, LOW);
delay(LEDDELAY);
;
}
