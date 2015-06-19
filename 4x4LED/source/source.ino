#include "cubecontrol.h"

int shape[2][8] = {{0,1,2,3,3,2,1,0}, {1,0,0,1,2,3,3,2}};
int x = 0;
int y = 0;

void setup() {                
    for(int i = 0; i<9; i++){
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }

    for(int i = 0; i<4; i++){
        digitalWrite(i, HIGH);
    }
    digitalWrite(4, LOW);
}

void loop() {
    x++;
    if(x > 200){
        x = 0;
        y++;
        if(y==8)
            y=0;
    }

        lightUp(shape[0][y], shape[1][y], 0);
        lightUp(shape[0][y], shape[1][y], 1);
        lightUp(shape[0][y], shape[1][y], 2);
        lightUp(shape[0][y], shape[1][y], 3);
}
