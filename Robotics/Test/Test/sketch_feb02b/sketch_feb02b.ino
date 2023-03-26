int redLight1 = 7;
int yellowLight1=8;
int greenLight1=9;

int redLight2=10;
int yellowLight2=11;
int greenLight2=12;
void setup() {
pinMode(redLight1,OUTPUT);
pinMode(redLight2,OUTPUT);
pinMode(yellowLight1,OUTPUT);
pinMode(yellowLight2,OUTPUT);
pinMode(greenLight1,OUTPUT);
pinMode(greenLight2,OUTPUT);

}

void loop() {
  ///greenlight1
 digitalWrite(greenLight1,HIGH);
 digitalWrite(yellowLight1,LOW);
 digitalWrite(redLight1,LOW);

 digitalWrite(greenLight2,LOW);
 digitalWrite(yellowLight2,LOW);
 digitalWrite(redLight2,HIGH);

 delay(2000);

 ////yellowlight flicker

 digitalWrite(greenLight1,LOW);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 ////redLight1

 digitalWrite(redLight1,HIGH);
 digitalWrite(greenLight2,HIGH);
 digitalWrite(redLight2,LOW);
delay(2000);
 ////aqui podria redefinir las variables para alernar al semaforo1 y semaforo 2 cambiando los pines pero no estoy seguro si la definicion de int permite mutar las variables, vale la pena investigarlo
digitalWrite(greenLight2,LOW);
digitalWrite(yellowLight2,HIGH);
  delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);
 digitalWrite(yellowLight1,HIGH);
 delay(500);
 digitalWrite(yellowLight1,LOW);
 delay(500);


}
