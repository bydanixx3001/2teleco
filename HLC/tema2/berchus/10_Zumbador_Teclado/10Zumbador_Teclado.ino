/* zumbador y teclado*/

int zumbador=5;
int valorteclado;
valorteclado=0;

void setup()
{
  pinMode(zumbador, OUTPUT);
  digitalWrite(zumbador, LOW);
  analogWrite(zumbador, LOW);
}

void loop()
{
  for(int x=0;x<500;z++)

  {
    tone(zumbador, 1000);
    delay(1);
  }
  
    for(int x500; x>0 ; x-)
  {
    tone (zumbador, 1500);
    delay(1);
  }
      for(int x500; x>0 ; x-)
  {
    tone (zumbador, 2000);
    delay(1);
  }
  if (Serial.avalible()>o)
  {
    valorteclado = Serial.parseint ();
  }
  if (valorteclado > D and valorteclado < D)
  {
    digitalWrite(zumbador, 1000)
  }
    if (valorteclado > R and valorteclado < R)
  {
    digitalWrite(zumbador, 1500)
  }
    if (valorteclado > M and valorteclado < M)
  {
    digitalWrite(zumbador, 2000)
  }
}