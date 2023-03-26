const int ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // define the LED pins
 int stateLedPin[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};// define LED state

void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  for (int i = 0; i < 9; i++) {
    pinMode(ledPin[i], OUTPUT); // set the LED pins as outputs
  stateLedPin[i]=false;

  }
}

void loop() {

  
  if (Serial.available() > 0) {
    char input = Serial.read();
    switch (input) {
      case '0':
      if(stateLedPin[0]){
        digitalWrite(ledPin[0],LOW);// turn off LED if it is on
        stateLedPin[0]=false;
        break;
        } // do this if statement for all cases
        digitalWrite(ledPin[0], HIGH); // turn on LED 0}
        stateLedPin[0]=true;
        break;
      case '1':
        digitalWrite(ledPin[1], HIGH); // turn on LED 1
        break;
      case '2':
        digitalWrite(ledPin[2], HIGH); // turn on LED 2
        break;
      case '3':
        digitalWrite(ledPin[3], HIGH); // turn on LED 3
        break;
      case '4':
        digitalWrite(ledPin[4], HIGH); // turn on LED 4
        break;
      case '5':
        digitalWrite(ledPin[5], HIGH); // turn on LED 5
        break;
      case '6':
        digitalWrite(ledPin[6], HIGH); // turn on LED 6
        break;
      case '7':
        digitalWrite(ledPin[7], HIGH); // turn on LED 7
        break;
      case '8':
        digitalWrite(ledPin[8], HIGH); // turn on LED 8
        break;
      case '9':
        digitalWrite(ledPin[9], HIGH); // turn on LED 9
        break;
      default:
        for (int i = 0; i < 9; i++) {
          digitalWrite(ledPin[i], LOW); // turn off all LEDs
        }
        break;
    }
  }
}
