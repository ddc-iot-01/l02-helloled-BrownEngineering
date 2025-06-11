/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "math.h"
const int LED1=D1;
const int LED2=D16;
float t; //Time
int b; //Brightness
float off=255/2;
float amp=255/2;
void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
}
void loop() {
  t=millis()/1000.0; //returns time from particle in ms
  b=amp*sin(2*M_PI*1.0/5.0*t)+off;
  analogWrite(LED1,b);
}
