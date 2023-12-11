/*Crear tonos*/

int Buzzer=3; //

void setup()

{

pinMode(Buzzer,OUTPUT);

}

void loop()

{


analogWrite(Buzzer,150);// el 150 es volumen

}