#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val=0;    // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  myservo.attach(9,500,2400);  // attaches the servo on pin 9 to the servo object
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
 String content = "";
char character;
    
while(Serial.available()) {
     character = Serial.read();
     content.concat(character);
}

if(content!="password"){
  myservo.write(90);   
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(4000);
  }if(content=="password"){
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    delay(4000);
    }               // sets the servo position according to the scaled value
  myservo.write(0);
  delay(20);                           // waits for the servo to get there
}
