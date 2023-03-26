void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}
    int incomingByte ;

void loop() {
  incomingByte = Serial.read();
  // read a byte from the serial port:
  if (Serial.available()) {
    // print the byte to the serial monitor:
    Serial.println(incomingByte);

  }
  if(incomingByte==97){
    digitalWrite(LED_BUILTIN,HIGH);}else{
      digitalWrite(LED_BUILTIN,LOW);
    }
} 
