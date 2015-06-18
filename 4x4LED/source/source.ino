bool bits[4] = {0, 0, 1, 0};
int shape[2][8] = {{0,1,2,3,3,2,1,0}, {1,0,0,1,2,3,3,1}};
int x;
int y;

void lightUp(int x, int y, int z);
void printLed(bool b1, bool b2, bool b3, bool b4);

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
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 8; k++) {
                lightUp(i, j, k);
            }
        }
    }
}

void printLed(bool b1, bool b2, bool b3, bool b4){
    if(b1)
        digitalWrite(5, HIGH);
    else  
        digitalWrite(5, LOW);

    if(b2)
        digitalWrite(6, HIGH);
    else  
        digitalWrite(6, LOW);

    if(b3)
        digitalWrite(7, HIGH);
    else  
        digitalWrite(7, LOW);

    if(b4)
        digitalWrite(8, HIGH);
    else  
        digitalWrite(8, LOW); 
}

void lightUp(int x, int y, int z){

    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);

    digitalWrite(3-y, LOW);
    if(x==0){
        switch (z) {
            case 0:
                printLed(0,0,1,1);
                break;
            case 1:
                printLed(1,0,1, 1);
                break;
            case 2:
                printLed(0,1,1,1);
                break;
            case 3:
                printLed(1,1,1,1);
                break;
        }
    }else if(x==1){
        switch (z) {
            case 0:
                printLed(0,0,0,1);
                break;
            case 1:
                printLed(1,0,0,1);
                break;
            case 2:
                printLed(0,1,0,1);
                break;
            case 3:
                printLed(1,1,0,1);
                break;
        }
    }else if (x==2) {
        switch (z) {
            case 0:
                printLed(0,0,1,0);
                break;
            case 1:
                printLed(1,0,1,0);
                break;
            case 2:
                printLed(0,1,1,0);
                break;
            case 3:
                printLed(1,1,1,0);
                break;
        }
    }else if (x==3) {
        switch (z) {
            case 0:
                printLed(0,0,0,0);
                break;
            case 1:
                printLed(1,0,0,0);
                break;
            case 2:
                printLed(0,1,0,0);
                break;
            case 3:
                printLed(1,1,0,0);
                break;
        }
    }
}
