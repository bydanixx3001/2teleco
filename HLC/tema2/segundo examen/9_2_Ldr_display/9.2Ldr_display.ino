const int ldrPin = A0;
const int displayPins[7] = {1, 2, 3, 4, 5, 6, 7};  // Cambia estos pines según tu configuración

void setup() {
  pinMode(ldrPin, INPUT);
  
  for (int i = 0; i < 7; i++) 
  {
    pinMode(displayPins[i], OUTPUT);
    digitalWrite(displayPins[i], LOW);
  }
}

void Display(int va, int vb, int vc, int vd, int ve, int vf, int vg) 
{
  digitalWrite(displayPins[0], va);
  digitalWrite(displayPins[1], vb);
  digitalWrite(displayPins[2], vc);
  digitalWrite(displayPins[3], vd);
  digitalWrite(displayPins[4], ve);
  digitalWrite(displayPins[5], vf);
  digitalWrite(displayPins[6], vg);
}

byte numeros[10][7] = 
{
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  // Agrega las definiciones para los números restantes
};

void loop() 
{
  int valorLDR = analogRead(ldrPin);
  int minLDR = 0;
  int maxLDR = 1023;
  valorLDR = constrain(valorLDR, minLDR, maxLDR);

  // Mapea el valor LDR al rango de 0 a 9
  int valorAleatorio = map(valorLDR, minLDR, maxLDR, 0, 9);

  // Muestra el número en el display
  Display(numeros[valorAleatorio][0], numeros[valorAleatorio][1], numeros[valorAleatorio][2],
          numeros[valorAleatorio][3], numeros[valorAleatorio][4], numeros[valorAleatorio][5],
          numeros[valorAleatorio][6]);

  delay(1000);  // Ajusta el tiempo de visualización según tus necesidades
}
