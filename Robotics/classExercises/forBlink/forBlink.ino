  void setup() {
for(int i=0;i<14;i++){
  pinMode(i,OUTPUT);
  }

}

void loop() {
for(int i=0;i<14;i++){
  
    digitalWrite(i,HIGH);
  };
  delay(1000);
  for(int i=1;i<14;i++){
  
    digitalWrite(i,LOW);
  };

}
