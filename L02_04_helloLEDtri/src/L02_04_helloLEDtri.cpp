/* 
 * Project L02_04_helloLEDtri
 * Author: Benjamin Brown
 * Date: 06072025
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(AUTOMATIC);
const int REDLED = D1;
const int BLUELED = D16;
const float DELAY = 19.6;
int j;

void setup() {
  pinMode(REDLED,OUTPUT);
  pinMode(BLUELED,OUTPUT);
}

void loop() {
  for (j=0;j<=255;j++){
  analogWrite(REDLED,j);
  analogWrite(BLUELED,255-j);
  delay(DELAY);
  }
  for (j=255;j>=0;j--){
  analogWrite(REDLED,j);
  analogWrite(BLUELED,255-j);
  delay(DELAY);
  }
  
}
