void setup() {
  Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
  int reflexive=analogRead(A0);
  int distance=map (reflexive,0,1000,0,15);
Serial.print(distance);
Serial.println("cm");
int reflexiveMapped= map(reflexive,0,1000,0,255);
analogWrite(9,reflexiveMapped);
analogWrite(10,255-reflexiveMapped);
analogWrite(11,255);

}
