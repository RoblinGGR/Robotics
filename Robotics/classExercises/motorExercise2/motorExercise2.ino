const int analogPin = A0;
const int led1=A1;
const int led2=A2;
const int led3=A3;
const int led4=A4;
const int led5=A5;



void setup() {
  Serial.begin(9600);
  for (int i = 6; i < 12; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void loop() {
  
  int analogValue = analogRead(analogPin);
  int potentiometerValue = analogValue*255.0/1023.0;
  Serial.println(potentiometerValue);
    analogWrite(11, potentiometerValue);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    analogWrite(6, potentiometerValue);
    analogWrite(8, LOW);
    analogWrite(7, HIGH);
    int switchVar=(potentiometerValue/255.0)*5;
switch(switchVar){
  case 5:
  analogWrite(led1,HIGH);
   analogWrite(led2,LOW);
     analogWrite(led3,LOW);
   analogWrite(led4,LOW);
   analogWrite(led5,LOW);
break;
  case 4:
    analogWrite(led1,LOW);
   analogWrite(led2,HIGH);
     analogWrite(led3,LOW);
   analogWrite(led4,LOW);
   analogWrite(led5,LOW);
break;
  case 3:
    analogWrite(led1,LOW);
   analogWrite(led2,LOW);
     analogWrite(led3,HIGH);
   analogWrite(led4,LOW);
   analogWrite(led5,LOW);
break;
  case 2:
    analogWrite(led1,LOW);
   analogWrite(led2,LOW);
     analogWrite(led3,LOW);
   analogWrite(led4,HIGH);
   analogWrite(led5,LOW);
break;
  case 1:
    analogWrite(led1,LOW);
   analogWrite(led2,LOW);
     analogWrite(led3,LOW);
   analogWrite(led4,LOW);
   analogWrite(led5,HIGH);
break;
  
}
    
}
