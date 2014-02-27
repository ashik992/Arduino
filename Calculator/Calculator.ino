int num1, num2, num, res, z;
char c, sym;
int r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14;

void readX(){ //Declaire a fiunction
  r0  = digitalRead(0); 
  r1  = digitalRead(1); 
  r2  = digitalRead(2); 
  r3  = digitalRead(3); 
  r4  = digitalRead(4); 
  r5  = digitalRead(5); 
  r6  = digitalRead(6); 
  r7  = digitalRead(7); 
  r8  = digitalRead(8); 
  r9  = digitalRead(9); 
  r10 = digitalRead(10); 
  r11 = digitalRead(11); 
  r12 = digitalRead(12); 
  r13 = digitalRead(13); 
  r14 = digitalRead(14); 

  if(r0== 1){
    c = '0'; 
    r9 = 0;
  }
  else if(r1 == 1){
    c = '1'; 
    r1 = 0;
  }
  else if(r2 == 1){
    c = '2'; 
    r2 = 0;
  }
  else if(r3 == 1){
    c = '3'; 
    r3 = 0;
  }
  else if(r4 == 1){
    c = '4'; 
    r4 = 0;
  }
  else if(r5 == 1){
    c = '5'; 
    r5 = 0;
  }
  else if(r6 == 1){
    c = '6'; 
    r6 = 0;
  }
  else if(r7 == 1){
    c = '7'; 
    r7 = 0;
  }
  else if(r8 == 1){
    c = '8'; 
    r8 = 0;
  }
  else if(r9 == 1){
    c = '9'; 
    r9 = 0;
  }
  else if(r10 == 1){
    c = '+'; 
    r9 = 0;
  }
  else if(r11 == 1){
    c = '-'; 
    r9 = 0;
  }
  else if(r12 == 1){
    c = '*'; 
    r9 = 0;
  }
  else if(r13 == 1){
    c = '/';
    r9 = 0;
  }
}

int setValue(){
  readX();
  num = (int)c -48;

  for(int i=0; i<3; i++)
  {      
    readX();
    if(c == '='){
      break;
    }
    else if(c == '+' || c=='-' || c=='*' || c=='/')
    {
      sym = c;
      break;
    }
    else {
      z = ((int)c) - 48;
      num = (num*10) + z;
    }      
  }
  return num;
}

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  num1 = setValue();
  num2 = setValue();

  if(sym == '+'){
    res = num1 + num2;
  }
  else if(sym == '-'){ 
    res = num1 - num2;
  }
  else if(sym == '*'){ 
    res = num1 * num2;
  }
  else if(sym == '/'){ 
    res = num1 / num2;
  }

  Serial.print(res);
}


