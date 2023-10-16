/*Mover el servo*/
#include <Servo.h> //incluimos la libreria del servo

Servo miservo; 
int p = 90;
void setup() {
  miservo.attach(9); 
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) 
  {
    int G = Serial.parseInt();

    if (G >= 0 && G <= 180) 
    {
      miservo.write(G); 
      p = G;
     }
  }
}
