int mint = 0;
int hour = 1;

void setup(){
 for(int i=1; i<=13; i++){
   pinMode(i, OUTPUT);
 }
}

void loop(){
  //resetAll();
  writeBin(mint, 7, 12);
  writeBin(hour, 1, 4);
  seconds();
  if(++mint ==60){
    mint = 0;
    if(hour++ == 12){
      hour = 1;
    }
  }
}

void seconds(){
  for(int i=1; i<=6; i++){
    for(int j=0; j<10; j++){
      analogWrite(6, (j*15));
      delay(1000);
    }
    analogWrite(5, (25*i));
  }
}

void writeBin(int num, int bgn, int last){
  for(int i = bgn; i <= last; i++){
    if (bitRead(num, (i-bgn)) == 1){
      digitalWrite(i, HIGH);
    }
    else{
      digitalWrite(i, LOW);
    }
  }
}

void resetAll(){
  for(int i=1; i<14; i++){
    digitalWrite(i, LOW);
  }
}
