int red=2;
int blue=3;
int green=4;
void setup() {

pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}
///<100 black >100 white

void loop() {
  analogWrite(red,0);
   analogWrite(blue,100);
    analogWrite(green,255);
  }
