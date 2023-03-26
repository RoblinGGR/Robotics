void prendeUno(byte numPin);
const byte LEDS[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
byte caracter = 0;
bool entre = 0;
int active;

void setup()
{
    Serial.begin(9600);
    for (int i = 0; i < 10; i++)
    {
        pinMode(LEDS[i], OUTPUT);
    }
}
void loop()
{
  
    if (Serial.available()){
        caracter = Serial.read()-48;
        String mensaje = "El Pin es: "+ String(caracter);
        Serial.println(mensaje);
        entre=1;
    }
    prendeUno(caracter);
int sensorValue = analogRead(A0);
    digitalWrite(LEDS[active],LOW);
    delay(sensorValue);
   digitalWrite(LEDS[active],HIGH);
}
void prendeUno(byte numPin){
  if(entre){
    for(int i=0;i<10;i++){
      if(i==numPin&&active!=i){
        digitalWrite(LEDS[i],HIGH);
        active=i;
      }
      else{
         if(i==numPin&&active==i){
        digitalWrite(LEDS[i],LOW);
      }else{
        digitalWrite(LEDS[i],LOW);}

      }
    }
  }return;
}
