int reflexive = A0;
int red=2;
int blue=3;
int green=4;
void setup() {
  Serial.begin(9600);
pinMode(reflexive,INPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}
///<100 black >100 white

void loop() {


int reading=analogRead(reflexive);
Serial.println(reading);
if(reading<16&&reading>10){
analogWrite(blue,255);
analogWrite(green,0);
analogWrite(red,0);
  Serial.println("blue");
}
if(reading>=34&&reading<37){
analogWrite(blue,100);
analogWrite(green,15);
analogWrite(red,100);
Serial.println("Brown");
}
if(reading<28&&reading>25){
analogWrite(blue,255);
analogWrite(green,255);
analogWrite(red,0);
  Serial.println("yellow");
}
if(reading>=40&&reading<50){
analogWrite(blue,10);
analogWrite(green,10);
analogWrite(red,10);
Serial.println("Gray");
}
}
