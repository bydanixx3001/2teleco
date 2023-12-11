/*Display de 7 segmento con ldr*/
// Definir los pines para el display de 7 segmentos
int segmentos[] = {2, 3, 4, 5, 6, 7, 8, 9};

// Definir el pin para el sensor <link>LDR</link>
int pinLDR = A0;

void setup() {
  // Configurar los pines de los segmentos como salidas
  for (int i = 0; i < 8; i++) 
  {
    pinMode(segmentos[i], OUTPUT);
    digitalWrite(pinLDR, LOW);
  }
  // Iniciar la comunicación serie
  Serial.begin(9600);
}

void loop() {
  // Leer el valor del sensor <link>LDR</link>
  int valorLDR = analogRead(pinLDR);

  // Mapear el valor del sensor <link>LDR</link> al rango del número (1-9)
  int numero = map(valorLDR, 0, 1023, 1, 9);

  // Mostrar el número en el display de 7 segmentos
  mostrarNumero(numero);

  // Imprimir el valor del sensor <link>LDR</link> en el monitor serie
  Serial.print("Valor LDR: ");
  Serial.println(valorLDR);

  // Esperar un breve periodo de tiempo
  delay(100);
}

// Función para mostrar un número en el display de 7 segmentos
void mostrarNumero(int numero) {
  // Definir los patrones para cada número en el display de 7 segmentos
  int numeros[10][8] = {
    {1, 1, 1, 1, 1, 1, 0, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1, 0}, // 2
    {1, 1, 1, 1, 0, 0, 1, 0}, // 3
    {0, 1, 1, 0, 0, 1, 1, 0}, // 4
    {1, 0, 1, 1, 0, 1, 1, 0}, // 5
    {1, 0, 1, 1, 1, 1, 1, 0}, // 6
    {1, 1, 1, 0, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1, 0}, // 8
    {1, 1, 1, 1, 0, 1, 1, 0}  // 9
  };

  // Apagar todos los segmentos
  apagarSegmentos();

  // Encender los segmentos correspondientes al número
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentos[i], numeros[numero][i]);
  }
}

// Función para apagar todos los segmentos
void apagarSegmentos() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentos[i], LOW);
  }
}