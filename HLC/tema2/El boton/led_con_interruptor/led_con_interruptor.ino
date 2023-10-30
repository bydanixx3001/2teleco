/*led con interruptor*/
int boton=9;//el pulsador se encuentra en el pin digital 9
int led=8; // el led se encuentra en el pin digital 8
int estadoBoton = 0; // Variable para almacenar el estado del botón
int estadoLed = LOW; // Variable para almacenar el estado del LED

void setup() {
  pinMode(boton,INPUT); // definir salida 
  pinMode(led,OUTPUT); // definir entrada 
  digitalWrite(led,LOW);//cuando se inicie el programa que el led este apagado
  //Serial.begin(9600);
}

void loop() {
  estadoBoton = digitalRead(boton);// para que lea el boton y sepa si esta 1/0
  //Serial.print("Estado boton =");
  //Serial.println(estadoBoton);
  if (estadoBoton == HIGH) { // Si el botón está presionado
    estadoLed = !estadoLed; // Cambiar el estado del LED
    digitalWrite(led, estadoLed); // Encender o apagar el LED según el estado
    delay(2500); // Pequeña pausa para evitar el rebote del botón
  }
}
