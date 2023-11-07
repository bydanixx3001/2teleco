/*Encender led con lrd*/
int ldr=A0;
int led=13;
int estado_ldr;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
}

void loop ()
{
 estado_ldr=digitalRead(ldr);
 if(estado_ldr>=1f)
  {
    Serial.println(estado_ldr);
    digitalWrite(led,HIGH);
  }
   else
   {
    digitalWrite(led,LOW);
   }
}
