int reflexive = A0;
int red=2;
int blue=3;
void setup() {
  Serial.begin(9600);
pinMode(reflexive,INPUT);
}
///<100 black >100 white

void loop() {


int reading=analogRead(reflexive);
Serial.println(reading);
if(reading<75){
  analogWrite(red,255);
    analogWrite(blue,0);
  Serial.println("White");
}
if(reading>=75){
  analogWrite(blue,255);
    analogWrite(red,0);
Serial.println("Black");
}
}
