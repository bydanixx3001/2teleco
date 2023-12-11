int Trigger= 2;
int Echo= 3;
long t, d; //para medir tiempo y distancia en un sólo comando
void setup()
{
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW); //iniciar en apagado el trigger
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  t= pulseIn(Echo, HIGH);
  d= t/59;
  int distancia = pulseIn(Echo, HIGH);
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(1000);
}