/* unsigned int A = 11; */
/* unsigned int B = 7; */
/* unsigned int C = 4; */
/* unsigned int D = 2; */
/* unsigned int E = 1; */
/* unsigned int F = 10; */
/* unsigned int G = 5; */
/* unsigned int dp = 3; */
/*  */
/* unsigned int lC = 0; */
/* unsigned int n2d = 0; */

#include "disp.h"


unsigned int mins = 0;
unsigned int secs = 0;


void setup() {                
    for(int i=0; i<13; i++){
        pinMode(i, OUTPUT);
        digitalWrite(i, HIGH);
    }
}

void loop() {
    secs = (int) (millis() / 1000) % 60;
    mins = (int) (millis() / 60000) % 60;

    displayNos((mins*100)+secs);
}

