void setup ()
{ 
    pinMode(1,OUTPUT); 
    pinMode(2,OUTPUT); 
    pinMode(3,OUTPUT); 
}
void loop() 
{ 
    digitalWrite(1, HIGH);
    Serial.print("Verde ON NARANJA OFF ROJO OFF");
    delay(8000);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    Serial.print("Verde OFF NARANJA ON ROJO OFF");
    delay(2000);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    Serial.print("Verde OFF NARANJA OFF ROJO ON");
    delay(5000);
    digitalWrite(3, LOW);
}