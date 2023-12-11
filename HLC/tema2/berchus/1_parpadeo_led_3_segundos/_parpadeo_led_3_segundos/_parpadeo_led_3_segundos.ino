/* Parpadeo led no integrado en la placa */

int led=13; //Se declara la variable del led no integrado en el pin 13

void setup()
{
  pinMode(led, OUTPUT); // para elegir la salida digital
  digitalWrite(led, LOW); // para que se inicialice el LED apagado
  Serial.begin(9600); //
  }

void loop()
{
  digitalWrite(led, HIGH); //para encender el led
  Serial.println("led ta ensendio "); //Irá en línea
  delay(3000); //el tiempo que tardará en encenderse
  digitalWrite(led, LOW); //para apagar el LED
  Serial.println("led ta apagao "); //Irá en línea
  delay(3000); //el tiempo que tardará en apagarse
}
