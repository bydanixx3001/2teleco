/* Semáforo con 3 leds*/
int v=8; //será el verde
int n=9; //sera el amarillo
int r=10; //será el rojo

void setup()
{
  pinMode(v, OUTPUT); //la salida del verde
  digitalWrite(v, LOW); //se inicia apagado
  pinMode(n, OUTPUT); //la salida del naranja
  digitalWrite(n, LOW); //se inicia apagado
  pinMode(r, OUTPUT); // la salida del rojo
  digitalWrite(r, LOW); //se inicia apagado
  Serial.begin(9600); //medida de la transmision de informacion
}

void loop()
{
  digitalWrite(v, HIGH); //se enciende el led verde
  Serial.println("Led verde ON, naranja y rojo off"); //se manifiesta la frase en el monitor serie
  delay(8000); //el tiempo que tarda en encenderse
  digitalWrite(v, LOW); //se apaga el led verde
 

  digitalWrite(n, HIGH); //se enciende el led naranja
  Serial.println("Led naranja ON, verde y rojo off"); //se manifiesta la frase en el monitor serie
  delay(2000); //el tiempo que tarda en encenderse
  digitalWrite(n, LOW); //se apaga el led naranja
  
 
  digitalWrite(r, HIGH); //se enciende el led rojo
  Serial.println("Led rojo ON, verde y naranja off"); //se manifiesta la frase en el monitor serie
  delay(5000); //el tiempo que tarda en encenderse
  digitalWrite(r, LOW); //se apaga el led rojo
  

}