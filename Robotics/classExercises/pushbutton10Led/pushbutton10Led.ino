int up=2;
int down=3;
void setup() {
  for(int i=13;i>3;i--){
  pinMode(i,OUTPUT);
  pinMode(up,INPUT);
   pinMode(down,INPUT);
 Serial.begin(9600);
 digitalWrite(13,LOW);
  }
}
 int pointer=4;
 
void loop() {
bool isUp=digitalRead(up);
bool isDown=digitalRead(down);
Serial.println(isUp);
Serial.println(isDown);
if(isUp){
  delay(100);

}
if(isDown){
  delay(100);
  Serial.println("abajo");
}

for(int i=pointer;i<14;i++){
  digitalWrite(i,LOW);
}
digitalWrite(pointer,HIGH);
if(isUp&&pointer<14){
  pointer++;
 
digitalWrite(pointer,HIGH);
}else{
  if(isDown&&pointer>3){
    pointer--;
 
    digitalWrite(pointer,HIGH);
  
  }
}
}
