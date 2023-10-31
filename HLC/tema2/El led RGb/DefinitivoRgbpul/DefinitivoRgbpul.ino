/*Led RGB que se enciende al darle al pulsador*/
int pinRed = 3;     //Declarar pin de conexión del LED Rojo del RGB
int pinGreen = 5;   // Declarar pin de conexión del LED Verde del RGB
int pinBlue = 6;    // Declarar pin de conexión del LED Azul del RGB
int pinBoton = 9;   // Declarar pin donde está conectado el pulsador
int estadoBoton = LOW;  //Declarar variable para almacenar el estado del botón
int estadoLed = 0;    // Declarar variable para almacenar el estado del LED RGB
int Cpul = 0;         //Declarar contador pulsaciones

void setup() 
{
  pinMode(pinRed, OUTPUT);    // Configura los pines de LED como salidas
  pinMode(pinGreen, OUTPUT);  // Configura los pines de LED como salidas
  pinMode(pinBlue, OUTPUT);   // Configura los pines de LED como salidas
  pinMode(pinBoton, INPUT); // Configura el pin del botón como entrada
  digitalWrite(pinRed, LOW);    // Apaga los LEDs
  digitalWrite(pinGreen, LOW);  // Apaga los LEDs
  digitalWrite(pinBlue, LOW);   // Apaga los LEDs
}

void setColor(int red, int green, int blue)
{
  analogWrite(pinRed, red); //Declara los pines de colores con la palabra del color
  analogWrite(pinGreen, green); //Declara los pines de colores con la palabra del color
  analogWrite(pinBlue, blue); //Declara los pines de colores con la palabra del color
}

void loop() 
{
  setColor(0, 0, 0); //apaga el LED
  estadoBoton = digitalRead(pinBoton); //lee el boton

  if (estadoBoton == LOW && estadoLed == LOW) //si no varia el pulsador sigue apagado
  {
    estadoLed = HIGH; //Cuando es pulse empieza el contador
    Cpul++; // Comienza a sumar de uno en uno a la variable Cpul
  } else 
  {
    if (estadoBoton == HIGH) 
    {
      estadoLed = LOW;
    }
  }

  if (Cpul == 1) 
  {
    setColor(255, 0, 0);
  } 
  else 
  {
    if (Cpul == 2)
    {
      setColor(0, 255, 0);
    } else 
    {
      if (Cpul == 3) 
      {
        setColor(0, 0, 255);
      } else
      {
        if (Cpul == 4) 
        {
          setColor(0, 0, 0);
          Cpul = 0;
        }
      }
    }
  }
}
