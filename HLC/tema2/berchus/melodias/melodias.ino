/*Crear melodias*/

int Buzzer=9;
int tonos[]={261,277,294,311,330,349,370,392,415,440,466,494};

void setup()

{
}

void loop()
{

  for (int notas=0;notas<12;notas++)
  {
    tone(Buzzer,tonos[notas]); //coje la primera nota , te vas el pin 9
    
    // tone es la funcion del pulsador su sintaxis es : se pone el pin , la frecuencia y una , para la duración

    delay(1000);
  }

  noTone(Buzzer);
}