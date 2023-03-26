int led =6 ;
int interruptor=9;
bool estado;
void setup() {
pinMode(led,OUTPUT);
pinMode(interruptor,INPUT);
Serial.begin(9600);
}

void loop() {
estado=digitalRead(interruptor);
digitalWrite(led,estado);
Serial.print("el estado del boton es:");
Serial.print(estado);
delay(100);
}
