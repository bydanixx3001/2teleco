/* El servomotor */

  #include <Servo.h> //se introduce la librería del servo
  Servo miservo; //se crea el objeto servo
  int pinservo=3; //declaro la variable del pin donde irá el servo

  void setup()
{
  miservo.attach(3); //es lo mismo que el int pinservo=3
  miservo.write(0); //que comience apagado
  Serial.begin(9600); //comando para que aparezca un comentario en el monitor serie
}
  void loop()
{
  miservo.write(0); //posiciona el servo a ese ángulo
  delay(250);
  Serial.println("sí"); //aparece el comentario en el monitor serie
  miservo.write(90); //posiciona el servo a ese ángulo
  Serial.println("no"); //aparece el comentario en el monitor serie
  delay(250); //que tarde 3 segundos
}
