/*RGB*/

int pinred=3; //declaro el pin donde va ir conectado
int pingreen=5; //declaro el pin
int pinblue=6; //declaro el pin

void setup()
{
  pinMode(pinred, OUTPUT); //asigno el pin a la salida
  pinMode(pingreen, OUTPUT); //asigno el pin a la salida
  pinMode(pinblue, OUTPUT); //asigno el pin a la salida
}

void loop()
{
  analogWrite(pinred, 234); //el número que tendrá
  analogWrite(pingreen, 0); //el número que tendrá
  analogWrite(pinblue, 255); //el número que tendrá
}
