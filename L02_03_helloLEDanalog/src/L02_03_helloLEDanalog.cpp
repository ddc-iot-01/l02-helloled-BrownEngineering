/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(AUTOMATIC);

const int PWMPIN = D1;
const int LEDDELAY = 5000;
const int LEDFLASH = 100;
int a = 0;
int b = 255;
int c = 63;
int d = 171;
int e = 16;

void setup() {
pinMode(PWMPIN,OUTPUT);
}

void loop() {
  analogWrite (PWMPIN, b);
  delay (LEDFLASH);
  analogWrite(PWMPIN,a);
  delay (LEDFLASH);
  analogWrite(PWMPIN,b);
  delay(LEDFLASH);
  analogWrite(PWMPIN, b);
  delay(LEDDELAY);
  analogWrite(PWMPIN, c);
  delay(LEDDELAY);
  analogWrite(PWMPIN, d);
  delay(LEDDELAY);
  analogWrite(PWMPIN,e);
  delay(LEDDELAY);
}
