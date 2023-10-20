int pulsador = 6;
int led = 13;
int Vpul = 0;
int Vled = 0;
int Vpul2 = 0;

void setup() 
{
  pinMode(led, OUTPUT);// Configura el pin del LED como salida
  pinMode(pulsador, INPUT);  // Configura el pin del pulsador como entrada
}

void loop() 
{ 
  Vpul = digitalRead(pulsador);// Lee el estado actual del pulsador
  if (Vpul != Vpul2) 
  { // Verifica si el estado del pulsador ha cambiado

    if (Vpul == HIGH) // Si ha cambiado, verifica si el pulsador ha sido presionado
    {  
      digitalWrite(led, HIGH); // Enciende el LED si el pulsador ha sido presionado
    } else 
    {
      digitalWrite(led, LOW);   // Apaga el LED si el pulsador ha sido liberado
    }
  } 
  Vpul2 = Vpul;// Almacena el estado actual del pulsador como el estado anterior
}