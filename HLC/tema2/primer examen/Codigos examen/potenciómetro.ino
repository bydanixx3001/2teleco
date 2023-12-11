/*mover servo por un potenciometro*/
#include <Servo.h>

Servo servoMotor;  // Crea un objeto de tipo Servo

int potentiometerPin = A0;  // Pin analógico al que está conectado el potenciómetro
int servoPosition = 0;     // Almacena la posición actual del servomotor
int potentiometerValue = 0;  // Almacena el valor del potenciómetro

void setup() {
  servoMotor.attach(9);  // El servo se conecta al pin 9
}

void loop() {
  potentiometerValue = analogRead(potentiometerPin);  // Lee el valor del potenciómetro
  servoPosition = map(potentiometerValue, 0, 1023, 0, 180);  // Mapea el valor del potenciómetro al rango de 0-180 grados
  servoMotor.write(servoPosition);  // Mueve el servo a la posición deseada
  delay(15);  // Pequeña pausa para estabilizar el servo
}
