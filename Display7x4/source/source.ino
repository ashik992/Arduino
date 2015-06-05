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

void displayNos(int dig);
void displayNo(int j);

int millisecs;
int mins;
int hrs;

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
    displayNos(millis());
}

void displayNo(int j){
    for(int i=0; i<7; i++){
        if(num[j][i]){
            digitalWrite(segments[i], LOW);
            delay(1);
            digitalWrite(segments[i], HIGH);
        }else
            digitalWrite(segments[i], HIGH);
    } 
}

void displayNos(int dig){
    int d[4] = {0};
    int i = 0;

    while(dig>0){
        d[i++] = dig%10;
        dig /= 10;
    }

    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, HIGH);
    displayNo(d[3]);

    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(12, LOW);
    displayNo(d[2]);

    digitalWrite(6, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    displayNo(d[1]);

    digitalWrite(6, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    displayNo(d[0]);
}
