/* servo con teclado */

  #include <Servo.h> //se introduce la librería del servo
  Servo miservo; //se crea el objeto servo
  int pinservo=3; //declaro la variable del pin donde irá el servo
  long valorteclado; //para declarar el teclado
  

  void setup()
{
  miservo.attach(3); //es lo mismo que el int pinservo=3
  miservo.write(0); //que comience apagado
  Serial.begin(9600); //para ejecutar el monitor serie
}
  void loop()
{
  if(Serial.available()>0) //para preguntar al programa si ese número ya está cogido

  {
   valorteclado = Serial.parseInt (); //para que se guarde el número entero de la tecla
   
   if(valorteclado > 0 and valorteclado <= 180) //si el valor que he hecho entre 1 y 180
   { 
     miservo.write(valorteclado);
     Serial.print("el número en pantalla ha sido el ");
     Serial.println(valorteclado);
     Serial.print("º");
    }
   delay(500); //el tiempo que tarda en ejecutarse
  }
}