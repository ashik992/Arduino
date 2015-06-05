int A = 11;
int B = 7;
int C = 4;
int D = 2;
int E = 1;
int F = 10;
int G = 5;
int dp = 3;

int lC = 0;
int n2d = 0;

void displayNos(int d0, int d1, int d2, int d3);
void displayNo(int j);

int segments[7] = {11, 7, 4, 2, 1, 10, 5};
int num[10][7] = {{1,1,1,1,1,1,0},
    {0,1,1,0,0,0,0},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,1,1,1,1,1},
    {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1},
};

void setup() {                
    for(int i=0; i<13; i++){
        pinMode(i, OUTPUT);
        digitalWrite(i, HIGH);
    }
}

void loop() {
    lC++;
    if(lC >= 50){
        lC=0;
        n2d++;

        if(n2d ==7)
            n2d = 0;
    }

    displayNos(n2d, n2d+1, n2d+2, n2d+3);
}

void displayNo(int j){
    for(int i=0; i<7; i++){
        if(num[j][i])
            digitalWrite(segments[i], LOW);
        else
            digitalWrite(segments[i], HIGH);


    } 
}

void displayNos(int d0, int d1, int d2, int d3){

    delay(4);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, HIGH);
    displayNo(d0);

    delay(4);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(12, LOW);
    displayNo(d1);

    delay(4);  
    digitalWrite(6, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    displayNo(d2);

    delay(4);
    digitalWrite(6, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    displayNo(d3);
}
