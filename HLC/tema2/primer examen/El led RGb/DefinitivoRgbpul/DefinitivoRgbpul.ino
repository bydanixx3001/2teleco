int pinRed = 3;
int pinGreen = 5;
int pinBlue = 6;
int pinBoton = 9;

int estadoBoton = LOW;
int estadoLed = 0;
int Cpul = 0;

void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  pinMode(pinBoton, INPUT);
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
}

void setColor(int red, int green, int blue) 
{
  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}

void loop() {
  setColor(0, 0, 0);
  estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == LOW && estadoLed == LOW) {
    estadoLed = HIGH;
    Cpul++;
  } else {
    if (estadoBoton == HIGH) {
      estadoLed = LOW;
    }
  }

  if (Cpul == 1) {
    setColor(255, 0, 0);
  } else {
    if (Cpul == 2) {
      setColor(0, 255, 0);
    } else {
      if (Cpul == 3) {
        setColor(0, 0, 255);
      } else {
        if (Cpul == 4) {
          setColor(0, 0, 0);
          Cpul = 0;
        }
      }
    }
  }
}
