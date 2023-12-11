int tecladoPin = 2;  // Cambia el número de pin según la conexión física
int zumbadorPin = 5; // Cambia el número de pin según la conexión física

void setup() 
{
  Serial.begin(9600);
  pinMode(tecladoPin, INPUT);
  pinMode(zumbadorPin, OUTPUT);
}

void loop() 
{
  if (Serial.available() > 0) 
  {
    int tecla = Serial.read(); // Lee el carácter enviado por el puerto serial

    int frecuencia = 0;
    
    // Asigna frecuencia según la tecla presionada
    if (tecla == 'D') 
    {
      frecuencia = 262; // Frecuencia para la nota Do
    } else if (tecla == 'R') 
    {
      frecuencia = 294; // Frecuencia para la nota Re
    } else if (tecla == 'M') 
    {
      frecuencia = 330; // Frecuencia para la nota Mi
    }

    // Si se asignó una frecuencia, reproduce el tono en el zumbador
    if (frecuencia > 0) 
    {
      tone(zumbadorPin, frecuencia);
      delay(500); // Puedes ajustar la duración del tono
      noTone(zumbadorPin);
    }
  }
}
