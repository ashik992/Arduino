bool bits[4] = {0, 0, 1, 0};
int x;
int y;

void lightUp(int x, int y, int z);
void convertBin(int num);
void printLed();

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
    for (int k = 0; k < 4; k++) {
        lightUp(k, k, k);
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
    }
}

void convertBin (int num) {

    for(int x = 0; x<4; x++){
        if(num%2)
            bits[3-x]=1;
        else
            bits[3-x] = 0;

        num /= 2;    

    }
}


void printLed(){
    if(bits[0])
        digitalWrite(5, HIGH);
    else  
        digitalWrite(5, LOW);

    if(bits[1])
        digitalWrite(6, HIGH);
    else  
        digitalWrite(6, LOW);

    if(bits[2])
        digitalWrite(7, HIGH);
    else  
        digitalWrite(7, LOW);

    if(bits[3])
        digitalWrite(8, HIGH);
    else  
        digitalWrite(8, LOW); 
    delay(2);
}

void lightUp(int x, int y, int z){

    digitalWrite(3-y, LOW);

    if(x==0){
        switch (z) {
            case 0:
                convertBin(3);
                break;
            case 1:
                convertBin(11);
                break;
            case 2:
                convertBin(7);
                break;
            case 3:
                convertBin(15);
                break;
        }
    }else if(x==1){
        switch (z) {
            case 0:
                convertBin(1);
                break;
            case 1:
                convertBin(9);
                break;
            case 2:
                convertBin(5);
                break;
            case 3:
                convertBin(13);
                break;
        }
    }else if (x==2) {
        switch (z) {
            case 0:
                convertBin(2);
                break;
            case 1:
                convertBin(10);
                break;
            case 2:
                convertBin(6);
                break;
            case 3:
                convertBin(14);
                break;
        }
    }else if (x==3) {
        switch (z) {
            case 0:
                convertBin(0);
                break;
            case 1:
                convertBin(8);
                break;
            case 2:
                convertBin(4);
                break;
            case 3:
                convertBin(12);
                break;
        }
    }

    printLed();
}
