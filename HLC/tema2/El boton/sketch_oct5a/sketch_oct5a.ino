int pulsadorPin = 8;  
int ledPin = 9;     

void setup() {
  pinMode(pulsadorPin, INPUT);  
  pinMode(ledPin, OUTPUT);      
}

void loop() {
  int estadoPulsador = digitalRead(pulsadorPin);

  if (estadoPulsador == HIGH) {
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, 0);
  }
}
