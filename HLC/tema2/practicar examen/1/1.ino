/*Led con dos interruptores*/ 
int led = 13;
int PulsadorApagado= 6;
int PulsadorEncendido = 7;

void setup ()
{
  pinMode(PulsadorApagado, INPUT);
  pinMode(PulsadorEncendido, INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(PulsadorEncendido)== LOW)
  {
    digitalWrite(led, LOW);
    Serial.print("El led está apagado");
    delay(1000);
  }
 
    if (digitalRead,(PulsadorApagado)==LOW) 
    {
   digitalWrite(led,HIGH);
     Serial.print("El led está encendido");
      delay(1000);
    }
}
