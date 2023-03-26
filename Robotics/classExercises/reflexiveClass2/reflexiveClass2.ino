// Motor A connections
int enA = 9;
int in1 = 7;
int in2 = 8;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

#define left A5
//#define center A4
#define right A4
void setup() {
Serial.begin(9600);

pinMode(left,INPUT);
//pinMode(center,INPUT);
pinMode(right,INPUT);
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
analogWrite(9,140);
analogWrite(3,140);
}

void loop() {
int leftReadAnalog=  analogRead(left);
//int centerReadAnalog=  analogRead(center);
int rightReadAnalog=  analogRead(right);

bool leftRead= leftReadAnalog>800;
//bool centerRead= centerReadAnalog>800;
bool rightRead= rightReadAnalog>800;

Serial.println("");
Serial.print(leftReadAnalog);
Serial.print("---------");
//Serial.print(centerReadAnalog);
Serial.print("---------");
Serial.print(rightReadAnalog);
Serial.println("--------------");


/// 000
if(leftRead&&/*centerRead&&*/rightRead){ ////case when it is on the line 13,12,11 left,7,6,5 right
 
    analogWrite(9,100);
    analogWrite(3,100);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);

digitalWrite(5,HIGH);
digitalWrite(4,LOW);
  Serial.println("1 going straight");
  delay(100);
   
  }
  ///010
if(leftRead&&/*!centerRead&&*/rightRead){ ////case when it is on the line 13,12,11 left,7,6,5 right
 
    analogWrite(9,100);
    analogWrite(3,100);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);

digitalWrite(5,HIGH);
digitalWrite(4,LOW);
  Serial.println("2 going straight");
  delay(100);

  }
  ///011
  if(leftRead&&/*!centerRead&&*/!rightRead){//case when the line collides with side off center
 
    analogWrite(9,150);
    analogWrite(3,150);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);

digitalWrite(5,HIGH);
digitalWrite(4,LOW);
    Serial.println("3 going right");
    delay(400);
    }
      ///001
  if(leftRead&&/*centerRead&&*/!rightRead){//case when the line collides with side off center
 
    analogWrite(9,150);
    analogWrite(3,150);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);

digitalWrite(5,HIGH);
digitalWrite(4,LOW);
    Serial.println("3"" going right");
    delay(400);
    }


    ///100
  if(!leftRead&&/*centerRead&&*/rightRead){//case when the line collides with side off center 2
 
    analogWrite(9,150);
    analogWrite(3,150);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);

digitalWrite(4,HIGH);
digitalWrite(5,LOW);
  Serial.println("4 going left");
  delay(400);
    
  }

  ///001
  if(!leftRead&&/*!centerRead&&*/rightRead){//case when the line collides with side off center 2
 
    analogWrite(9,140);
    analogWrite(3,140);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);

digitalWrite(4,HIGH);
digitalWrite(5,LOW);
  Serial.println("5 going right");
    delay(400);
  }
///011
if(!leftRead&&/*centerRead&&*/rightRead){//case when the line collides with side off center 2
 
    analogWrite(9,140);
    analogWrite(3,140);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);

digitalWrite(4,HIGH);
digitalWrite(5,LOW);
  Serial.println("6 going right");
    delay(400);
  }
 
}
