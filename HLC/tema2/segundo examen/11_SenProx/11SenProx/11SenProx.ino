int trigPin = 2;  // Pin de salida del sensor de ultrasondos
int echoPin = 3; // Pin de entrada del sensor de ultrasonido

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie a 9600 bps
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

	int distancia = duration * 0.034 / 2;

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(1000);
}
