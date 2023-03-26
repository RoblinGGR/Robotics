void setup() {
  for(int i=13;i>3;i--){
  pinMode(i,OUTPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);
  }
}

void loop() {
int potentiometer=analogRead(A5);
 int led = ((potentiometer*10)/1023)+4;
 for(int i=led;i<14;i++){
  digitalWrite(i,LOW);
 }
 for(int i=led;i>3;i--){
digitalWrite(led,HIGH);
delay(5);
}delay(10);}
