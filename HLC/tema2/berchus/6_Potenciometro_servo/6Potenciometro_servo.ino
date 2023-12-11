/* El servomotor con Potenciómetro*/

  #include <Servo.h> //se introduce la librería del servo
  int pot = A0; // se declara el pin en el analog
  int valor_pot; // se declara el estado
  Servo miservo; //se crea el objeto servo
  int pinservo=3; //declaro la variable del pin donde irá el servo

  void setup()
{
  pinMode(pinservo, INPUT);
  miservo.attach(3); //es lo mismo que el int pinservo=3
  miservo.write(0); //que comience apagado
  Serial.begin(9600); //comando para que aparezca un comentario en el monitor serie
}
  void loop()
{
  valor_pot = analogRead(pot); // se lee el valor del pot entre 0 y 1023
  Serial.println(valor_pot); //se mostrará en el monitor serie el valor que se le dará al potenciómetro
  valor_pot = map (valor_pot, 0, 1023, 0, 180); // va a leer el mapeo y lo va a guarda
  miservo.write(valor_pot); // miservo escribe el estado del valor del pot
  delay(10); //delay necesario 
}
