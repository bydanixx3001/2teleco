/*Led con pulsador*/

int pulsador=9; //declaro pin 9 para el pulsador 
int valorpulsador; //declaro variables de para el pin del pulsador
int led=8; //declaro pin 8 para el led
void setup(){ //declarar los 
 pinMode(pulsador,INPUT); //declarar donde está el pulsador
 pinMode(led,OUTPUT); //declarar el pin donde está 
 Serial.begin(9600); //declarar el monitor serie
}

void loop()  //bucle
{
  valorpulsador=digitalRead(pulsador); //Lee el valor 
  if(valorpulsador==HIGH) //condicional que cuando sea HIGH pase lo siguiente
  { 
    digitalWrite(led,HIGH); //encender led 
    Serial.println("Led encendido"); //printear en el monitor serie
  }
    else //si no
  {
    digitalWrite(led,LOW); //apagar led 
    Serial.println("Led apagado"); //mostrar en el monitor serie 
  }
  delay(1000);
}