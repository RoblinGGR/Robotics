
// Motor A connections
int enA = 9;
int in1 = 7;
int in2 = 8;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

#define left A4
#define center A3
#define right A5
void setup() {
Serial.begin(9600);

pinMode(left,INPUT);
pinMode(center,INPUT);
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
  //Here we define our readings from the analog pins
  
int leftReadAnalog=  analogRead(left);
int centerReadAnalog=  analogRead(center);
int rightReadAnalog=  analogRead(right);

 //here we transform the analog readings to booleans (depending on whether the course is black line over white background or the other way around we put a not outside the parenthesis)
 
bool leftRead= (leftReadAnalog>200);
bool centerRead= (centerReadAnalog>200);
bool rightRead= (rightReadAnalog>200);

//Here we print our analog readings to the serial console so we can calibrate our boolean parameters

Serial.println("");
Serial.print(leftReadAnalog);
Serial.print("---------");
Serial.print(centerReadAnalog);
Serial.print("---------");
Serial.print(rightReadAnalog);
Serial.println("--------------");


//LOGIC//
//0=black,1=white for array of 3
//0=left, 1=center, 2=right, 3=sharpLeft, 4=sharpRight, 5=stop
//Here depending on the readings we determine what direction and how the robot will turn
int dir;
//000
if(leftRead&&centerRead&&rightRead){
  dir=1;
}
//111
if(!leftRead&&!centerRead&&!rightRead){
  dir=5;
}
//010
 if(leftRead&&!centerRead&&rightRead){
  dir=1;
 }
//100
if(!leftRead&&centerRead&&rightRead){
  dir=0;
}
//001
if(leftRead&&centerRead&&!rightRead){
  dir=2;
}
//110
if(!leftRead&&!centerRead&&rightRead){
  dir=3;
}
//011
if(leftRead&&!centerRead&&!rightRead){
  dir=4;
}
//Here we dont contemplate when the line is positioned to both sides but not the center
Serial.println(dir);

//MOVEMENT FUNCTIONS


}
