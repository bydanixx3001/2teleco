/*led rgb de catodo*/
int pinred = 9; // Definir los pines de conexión del LED RGB
int pingreen = 10;
int pinblue = 11;
void setup() 
{
  pinMode(pinred, OUTPUT); // configurar los pines como salidas
  pinMode(pingreen, OUTPUT);
  pinMode(pinblue, OUTPUT);
}

void loop()
{
  setColor(255, 0, 0); //encender en color rojo
  delay(1000); //esperar 1 segundo 
  setColor(255, 255, 0); //encender en color verde
  delay(1000); 
  setColor(0, 255, 0); //encender en color azul
  delay(1000);
}
void setColor(int red, int green, int blue) //funcion para establecer el color del led rgb
{
  analogWrite(pinred, red);
  analogWrite(pingreen, green);
  analogWrite(pinblue, blue);
}
