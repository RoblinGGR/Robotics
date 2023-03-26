#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  myservo.attach(9,500,2400);  // attaches the servo on pin 9 to the servo object
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
 
  
   for(int i=0;i<10;i++){
    val+=analogRead(A0);
    }
    val=val/10;
    val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
    Serial.println(val);
  
  if(val<5){
    digitalWrite(2,HIGH);
    }
      if(val<95&&val>89){
    digitalWrite(3,HIGH);
    }
      if(val>175){
    digitalWrite(4,HIGH);
    }
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(20);                           // waits for the servo to get there
}
