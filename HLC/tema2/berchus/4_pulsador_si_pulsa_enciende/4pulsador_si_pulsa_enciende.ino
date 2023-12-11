/* Pulsador se enciende solo cuando se pulsa*/
int pulsador=6; //el 6 es el pin y pulsador se llamará
int valorpulsador=0; //se declara una variable para el estado del pulsador
int LED=7; //se declara una variable al pin del led

void setup()
{
  pinMode(6, INPUT); //para que sea de entrada
  pinMode(7, OUTPUT); //la salida del led
  digitalWrite(7, LOW); //empieza apagado
}

  void loop()
  {
    valorpulsador=digitalRead(pulsador); //para leer el valor del pulsador
   if(valorpulsador==HIGH) //si el valor del pulsador se enciende
   {
      digitalWrite(LED,HIGH); //el led se enciende
   }
   else
   {
      digitalWrite(LED,LOW); //se apaga
   }
   }