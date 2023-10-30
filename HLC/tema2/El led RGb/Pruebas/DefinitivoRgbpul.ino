int pinRed = 3;     // Pin de conexión del LED Rojo del RGB
int pinGreen = 5;   // Pin de conexión del LED Verde del RGB
int pinBlue = 6;    // Pin de conexión del LED Azul del RGB
int pinBoton = 9;   // Pin donde está conectado el pulsador

int estadoBoton = LOW;  // Variable para almacenar el estado del botón
int estadoLed = 0;    // Variable para almacenar el estado del LED RGB
int Cpul = 0;         // Contador de pulsaciones

void setup() {
  pinMode(pinRed, OUTPUT);     // Configura los pines de LED como salidas
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  pinMode(pinBoton, INPUT_PULLUP); // Configura el pin del botón como entrada con resistencia pull-up interna
  digitalWrite(pinRed, LOW);     // Inicializa los LEDs en estado apagado
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
}

void setColor(int red, int green, int blue) {
  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}

void loop() {
 setColor(0, 0, 0); // Apagado
  estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == LOW && estadoLed == LOW) {
    // Cambia el estado del LED y aumenta el contador de pulsaciones
    estadoLed = HIGH;
    Cpul++;
  } else if (estadoBoton == HIGH) {
    // Restablece el estado del LED cuando se suelta el botón
    estadoLed = LOW;
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
