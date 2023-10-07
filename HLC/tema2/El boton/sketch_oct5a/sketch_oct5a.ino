int a =6;
int i =0;
int b =13;

void setup() 
{
pinMode(b,OUTPUT);
pinMode(a,INPUT);
}

void loop()
{
i= digitalRead(a);
if (i==1)
  digitalWrite(b,HIGH);
  Serial.print("Está encendido");
}