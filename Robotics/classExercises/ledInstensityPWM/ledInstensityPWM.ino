int ledPin = 10;     // LED connected to digital pin 10
int potPin = A0;     // potentiometer connected to analog pin A0
int brightness = 0;  // variable to store the LED brightness value
int ledPin2=11;

void setup() {
  pinMode(ledPin, OUTPUT);  // set the LED pin as an output
  pinMode(ledPin2,OUTPUT);
  Serial.begin(9600);       // initialize serial communication at 9600 baud
}
int brightness2=255;
void loop() {
 
  // read the value of the potentiometer and map it to a brightness value between 0 and 255
  int potValue = analogRead(potPin);
  brightness = map(potValue, 0, 1023, 0, 255);

   if (Serial.available()){
    char incomingByte=Serial.read();
    if(incomingByte=='+'&&brightness2<250){
      brightness2+=5;
    
    }else{
      if(incomingByte=='-'&&brightness2>5){
        brightness2-=5;
      
      }
      }
        analogWrite(ledPin2,brightness2);
  }
  // set the brightness of the LED
  analogWrite(ledPin, brightness);
  
  // print the brightness value to the serial console
  Serial.print("Brightness: ");
  Serial.println(brightness);
  
  delay(1);  // wait for 10 milliseconds before reading the potentiometer again
}
