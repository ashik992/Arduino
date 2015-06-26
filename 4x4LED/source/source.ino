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
    i = 3;
    j = 3;
    k = 3;
}

void loop() {
    t++;
    if(t==1500){
        t = 0;
        if(i<=0){

            if(j ==0 && k==0){
                j = rand() % 4;
                k = rand() % 4;
                i = 2 + rand() % 4;
            }

            if(j>0)
                j--;

            if(k>0)
                k--;

        }else
            i--;
    }

    if (t<500 && j>0 && i>0){
        if(t%5)
            lightUp(j, i+1, k); //this is whtere the magic happens
    }
    lightUp(j, i, k); //this is whtere the magic happens
}
