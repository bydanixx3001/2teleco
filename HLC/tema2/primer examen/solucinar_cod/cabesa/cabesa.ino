/*2 Leds con 1 pulsador*/
int pulsador=10; //declaro pin 9 para el pulsador 
int valorpulsador; //declaro variables de para el pin del pulsador
int led_1=7; //declaro pin 7 para led_1
int led_2=8; //declaro pin 8 para el led_2
void setup(){ //declarar los 
 pinMode(pulsador,INPUT); //declarar el pulsador como entrada 
 pinMode(led_1,OUTPUT); //declarar el led_1 como salida
 pinMode(led_2,OUTPUT);//declaro led_2 como salida
 Serial.begin(9600); //declarar el monitor serie
}

void loop()  //bucle
{
  valorpulsador=digitalRead(pulsador); //Lee el valor 
  if(valorpulsador==HIGH) //condicional que cuando sea HIGH pase lo siguiente
  { 
    digitalWrite(led_1,HIGH); //encender led 
    Serial.println("Led_1 encendido"); //printear en el monitor serie
  }
    if(valorpulsador=LOW) //si no
  {
    digitalWrite(led_2,HIGH); //apagar led 
    Serial.println("Led_2 encendido"); //mostrar en el monitor serie 
  }
  else
  {
    digitalWrite(led_1,LOW);
    digitalWrite(led_2,LOW);
    Serial.println("Leds apagados");
  }
}
