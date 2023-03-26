const int analogPin = A0;

void Switch(bool x){
  if (x == false){
    analogWrite(11, 255);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    analogWrite(6, 255);
    analogWrite(8, LOW);
    analogWrite(7, HIGH);
  }
  else {
    analogWrite(11, 255);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    analogWrite(6, 255);
    analogWrite(8, HIGH);
    analogWrite(7, LOW);
  }
}

void setup() {
  Serial.begin(9600);
  for (int i = 6; i < 12; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int analogValue = analogRead(analogPin);
  bool switchValue = analogValue > 512;
  Switch(switchValue);
  delay(1000);
}
