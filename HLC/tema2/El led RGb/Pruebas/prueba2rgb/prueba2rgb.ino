int pinred = 3; // Definir los pines de conexión del LED RGB
int pingreen = 5; // Definir los pines de conexión del LED RGB
int pinblue = 6; // Definir los pines de conexión del LED RGB
int boton=9;//el pulsador se encuentra en el pin digital 9
int color; // Variable para almacenar el estado del botón
int estadoBoton;
int estadoled;
int Cpul;
void setup() {
  pinMode(pinred, OUTPUT); // configurar los pines como salidas
  pinMode(pingreen, OUTPUT);
  pinMode(pinblue, OUTPUT);
  pinMode(boton,INPUT); // definir salida 
  digitalWrite(pinred,LOW);//cuando se inicie el programa que el led este apagado
  digitalWrite(pinblue,LOW);//cuando se inicie el programa que el led este apagado
  digitalWrite(pingreen,LOW);//cuando se inicie el programa que el led este apagado

}
void setColor(int red, int green, int blue) //funcion para establecer el color del led rgb
{
  analogWrite(pinred, red);
  analogWrite(pingreen, green);
  analogWrite(pinblue, blue);
}
void loop() 
{
  estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW) {
    Cpul++;
    delay(250); // Agrega un pequeño retraso para evitar múltiples incrementos al presionar el botón
  }
  if (Cpul == 1) {
    setColor(255, 0, 0); // Rojo
  } else if (Cpul == 2) {
    setColor(0, 255, 0); // Verde
  } else if (Cpul == 3) {
    setColor(0, 0, 255); // Azul
  } else if (Cpul == 4) {
    setColor(0, 0, 0); // Apagado
    Cpul = 0; // Reinicia el contador
  }
}
