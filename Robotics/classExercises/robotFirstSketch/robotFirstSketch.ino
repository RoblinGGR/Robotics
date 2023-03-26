void setup() {

pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);

}
void straight(bool dir, int vel){
digitalWrite(4,dir);
digitalWrite(5,!dir);
analogWrite(3,vel);
digitalWrite(10,dir);
digitalWrite(9,!dir);
analogWrite(11,vel);

  }

void turnAxis(bool dir,int vel){
digitalWrite(4,dir);
digitalWrite(5,!dir);
analogWrite(3,vel);
digitalWrite(10,!dir);
digitalWrite(9,dir);
analogWrite(11,vel);

  }

void smoothLeft(int vel){
  
  digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(3,vel);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
analogWrite(11,vel/2);
}
void smoothRight(int vel){
  digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(3,vel/2);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
analogWrite(11,vel/2);
  }
void loop() {


}
