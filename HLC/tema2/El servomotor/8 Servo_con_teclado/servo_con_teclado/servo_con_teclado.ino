*Servo con teclado*/
#include<Servo.h>
Servo miservo;
int pinservo=3;
int valorteclado;
int max= 180;
int min=0;

void setup() {
  miservo.attach(pinservo,min,max);
  Serial.begin(9600);
}
void loop() {
 if (Serial.available()>0){
  valorteclado=Serial.parseInt();
 if (valorteclado>min and valorteclado<=max){
   miservo.write(valorteclado);
  }
  }
  delay(500);
  Serial.print("El servo a girado");
  Serial.print(valorteclado);
  Serial.print("º");
  delay(1000);
}
