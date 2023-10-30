/*led rgb de catodo*/
int pinred = 3; // Definir los pines de conexión del LED RGB
int pingreen = 5; // Definir los pines de conexión del LED RGB
int pinblue = 6; // Definir los pines de conexión del LED RGB
int boton=9;//el pulsador se encuentra en el pin digital 9
int color; // Variable para almacenar el estado del botón
void setup() 
{
  pinMode(pinred, OUTPUT); // configurar los pines como salidas
  pinMode(pingreen, OUTPUT);
  pinMode(pinblue, OUTPUT);
}
void setColor(int red, int green, int blue)//funcion para establecer el color del led rgb
{
  analogWrite(pinred, red);
  analogWrite(pingreen, green);
  analogWrite(pinblue, blue);
}
void loop(){
  if (color =0)  { // Si el botón está presionado
    setColor(255, 0, 0); //encender en color rojo
    delay(1000); //esperar 1 segundo 
}
}
