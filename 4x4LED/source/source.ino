
bool bits[4] = {0, 0, 1, 0};
int x;
int y;

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
    digitalWrite(3, LOW);
}


void loop() {
    for(int i =0; i<16; i++){
        convertBin(i);
        printLed();

        delay(5000);
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
}

void lightUp(int x, y, z){

}
