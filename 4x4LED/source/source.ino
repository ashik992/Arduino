#include "cubecontrol.h"

int shape[2][8] = {{0,1,2,3,3,2,1,0}, {1,0,0,1,2,3,3,2}};
unsigned int t;
unsigned int i; //loop variables
unsigned int j;
unsigned int k;

void setup() {                
    for(i = 0; i<11; i++){
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }
    digitalWrite(4, LOW); // activates the 74154
    i = 0;
    j = 0;
    k = 0;
}

void loop() {
    t++;
    if(t > 1200){
        t = 0;
        i++;
        if(i==8)
            i=0;
    }

        lightUp(shape[0][i], shape[1][i], 0); //this is whtere the magic happens
        lightUp(shape[0][i], shape[1][i], 1);
        lightUp(shape[0][i], shape[1][i], 2);
        lightUp(shape[0][i], shape[1][i], 3);
}
