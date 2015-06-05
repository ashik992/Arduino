unsigned int A = 11;
unsigned int B = 7;
unsigned int C = 4;
unsigned int D = 2;
unsigned int E = 1;
unsigned int F = 10;
unsigned int G = 5;
unsigned int dp = 3;

unsigned int lC = 0;
unsigned int n2d = 0;

void displayNos(int dig);
void displayNo(int j);

unsigned int mins = 0;
unsigned int secs = 0;

unsigned int segments[7] = {11, 7, 4, 2, 1, 10, 5};
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
    secs = (int) (millis() / 1000) % 60;
    mins = (int) (millis() / 60000) % 60;

    displayNos((mins*100)+secs);
}

void displayNo(int j){
    for(int i=0; i<7; i++){
        if(num[j][i])
            digitalWrite(segments[i], LOW);
    } 

    for(int i=0; i<7; i++)
        digitalWrite(segments[i], HIGH);

    digitalWrite(3, HIGH);
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
    if(d[0]%2 == 0)
        digitalWrite(3, LOW);

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
