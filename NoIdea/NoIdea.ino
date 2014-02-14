#include <stdio.h>

int buttonZero = 0;
int buttonOne = 1;
int buttonTwo = 2;
int buttonThree = 3;
int buttonFoure = 4;
int buttonFive = 5;
int buttonSix = 6;
int buttonSeven = 7;
int buttonEight = 8;
int buttonNine = 9;
int buttonPlus;
int buttonMinus;
int buttonMul;
int buttonDev;
int buttonEqual;

boolean state = 0;

char symb;
int numOne = 0;
int numTwo = 0;
int res = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonZero, INPUT);
  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
  pinMode(buttonThree, INPUT);
  pinMode(buttonFoure, INPUT);
  pinMode(buttonFive, INPUT);
  pinMode(buttonSix, INPUT);
  pinMode(buttonSeven, INPUT);
  pinMode(buttonEight, INPUT);
  pinMode(buttonNine, INPUT);
  pinMode(buttonPlus, INPUT);
  pinMode(buttonMinus, INPUT);
  pinMode(buttonMul, INPUT);
  pinMode(buttonDev, INPUT);
  pinMode(buttonEqual, INPUT);

}

void loop()
{
  if(digitalRead(buttonPlus) == HIGH)
    
  
  delay(1000);
}

