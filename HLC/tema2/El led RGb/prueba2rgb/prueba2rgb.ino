int pinred = 3; // Definir los pines de conexión del LED RGB
int pingreen = 5; // Definir los pines de conexión del LED RGB
int pinblue = 6; // Definir los pines de conexión del LED RGB
int boton=9;//el pulsador se encuentra en el pin digital 9
int color; // Variable para almacenar el estado del botón
int estadoBoton;
int estadoled;
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
  if (estadoBoton ==HIGH)  // Si el botón está presionado
      {
        estadoled = !estadoled; // Cambiar el estado del LED
        digitalWrite(pinred, estadoled); // Encender o apagar el LED según el estado
        delay(10);
      }
        else {
          digitalWrite(pinred,LOW);//cuando se inicie el programa que el led este apagado
        }
       if (estadoBoton ==HIGH)  // Si el botón está presionado
         {
              estadoled = !estadoled; // Cambiar el estado del LED
              digitalWrite(pingreen, estadoled);
              delay(10);
         }
        else {
            digitalWrite(pingreen,LOW);//cuando se inicie el programa que el led este apagado
        }
         
        if (estadoBoton ==HIGH)  // Si el botón está presionado
          {
           estadoled = !estadoled; // Cambiar el estado del LED
           digitalWrite(pinblue, estadoled);
                  delay(10);

          }
            else {
            digitalWrite(pingreen,LOW);//cuando se inicie el programa que el led este apagado
            }
          if (estadoBoton ==HIGH)  // Si el botón está presionado
           {
               digitalWrite(pinred,LOW);//cuando se inicie el programa que el led este apagado
               digitalWrite(pinblue,LOW);//cuando se inicie el programa que el led este apagado
               digitalWrite(pingreen,LOW);//cuando se inicie el programa que el led este apagado
           delay(10);
           }
         }
