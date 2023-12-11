/* Semáforo RGB con pulsador*/

int pinred=3; //declaro el pin del rgb
int pingreen=5; //declaro el pin del rgb
int pinblue=6; //declaro el pin del rgb
int pulsador=9; //el 9 es el pin del pulsador

int valorpulsador=0; //se declara una variable para el estado del pulsador

void setup()
{
  pinMode(pinred, OUTPUT); //asigno el pin a la salida
  pinMode(pingreen, OUTPUT); //asigno el pin a la salida
  pinMode(pinblue, OUTPUT); //asigno el pin a la salida
  pinMode(9, INPUT); //para que sea de entrada
  digitalWrite(pinred, LOW);
  digitalWrite(pingreen, LOW);
  digitalWrite(pinblue, LOW);
  Serial.begin(9600);
}
void setColor(int red, int green, int blue)
{
	analogWrite(pinred, red); //
	analogWrite(pingreen, green); //
	analogWrite(pinblue, blue); //
}

void loop()
{
  valorpulsador=digitalRead(pulsador); //para leer el valor del pulsador
  if(valorpulsador==LOW)
    {
      setColor(0, 0, 0);
    }
    delay(100);
    Serial.println("Se apaga");

    if(valorpulsador==HIGH)
    {
      setColor(255, 0, 0);
    }
    delay(100);
    Serial.println("Rojo");
  }

