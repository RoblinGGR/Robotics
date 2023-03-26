void setup() {
  for(int i=13;i>3;i--){
  pinMode(i,OUTPUT);
  }
}

void loop() {
  for(int i=13;i>3;i--){
digitalWrite(i,HIGH);
delay(100);
digitalWrite(i,LOW);
  }
    for(int i=4;i<14;i++){
digitalWrite(i,HIGH);
delay(100);
digitalWrite(i,LOW);
  }
}
