/*Ldr y display*/

int a=9;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int p=8;

int ldr=A0;
int estadoldr;

void setup()
{
  pinMode( ldr, INPUT);
  int segmentos[8]={a, b, c, d, e, f, g, p};
  for (int i = 0; i<7; i ++){
  pinMode(segmentos, OUTPUT);
  digitalWrite(segmentos, LOW);
  }
  byte numeros[4] [8] =
    {
     { 0,1,1,0,0,0,0,0 },    // 1
     { 1,1,0,1,1,0,1,0 },    // 2
     { 1,1,1,1,0,0,1,0 },    // 3
     { 0,0,1,0,0,1,1,0 },    // 4
    };
    Serial.begin(9600);
}

void loop()
{
  estadoldr=analogRead(ldr);
  Serial.println(estadoldr);
  if (estadoldr<500)
    
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }

  if (estadoldr<600 and estadoldr>500)
    
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }
  
  if (estadoldr<900 and estadoldr>600)
    
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }
  
  if (estadoldr<1024 and estadoldr>900)
    
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  /*
  else
    
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }

  /*else
  {
    digitalWrite(segmentos, LOW);
  }
    if (estadoldr== 1018)
  {
    display(1, 0, 1, 1, 0, 1, 1, 0);
  }
  else
  {
    digitalWrite(segmentos, LOW);
  }
      if (estadoldr== 1018)
  {
    display(1, 0, 1, 1, 0, 1, 1, 0);
  }
  else
  {
    digitalWrite(segmentos, LOW);
  }
}
*/
}