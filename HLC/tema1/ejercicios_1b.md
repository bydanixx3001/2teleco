1. ¿Qué es el entorno de desarrollo integrado?
un entorno para programar la placa de arduino
2. Describe paso a paso cómo se instala el entorno de desarrollo integrado. Por cierto,
¿cuál es su sigla?
 1 abrir navegador
 2 buscar https://arduino.cc/es/ 
 3 ir al apartado Software 
 4 Descargar el de tu sistema operativo
 5 Ejecutarlo segun tu sistema 
 5.1 Si es windows ejecutar el archivo .exe 
 5.2 Si es Mac OS ejecutar su archivo 
 5.3 si es linux ejecutar el archivo AppImage 
 6 Aceptar las condiciones y todo a que si 

3. Si aún no tienes instalado en tu ordenador este entorno, instálalo. Lo puedes
descargar desde la web oficial de Arduino.

4. Enumera los pasos a seguir después de instalar el IDE y cómo se comprueba que el
ordenador ha detectado correctamente a arduino.
Continua ahora investigando las siguientes preguntas.
Ir a herrramientas--> placa-->Genunio1
5. ¿Qué es un “sketch”?
Es un archivo nuevo de arduino en el cual se pone el codigo 
6. Identifica en la siguiente imagen del IDE qué es cada zona señalada.
la flecha roja es el nombre del archivo
la rosa la version de arduino instalada
la zona azul es la botonera de subir complilar abrir y zoom 
la zona negra es cuantos hay abiertos
la naraja es para poner el codigo 
la azul es donde salen los errores al compilar 
La zona roja es una terminal que te dice la linea edl error 
La zona amarilla es para

7. Continúa indicando ahora la botonera diciendo para qué sirve cada uno de ellos.
Compilar 
Subir 
Nuevo 
Cargar 
Guardar
Monitor serial
Desplegable para abrir nuevos
Vuelve nuevamente al último vídeo y termina de hacer las últimas preguntas.
8. Escribe el esqueleto típico de un programa de Arduino según el vídeo.
void setup()
{
}
void loop()
{    
}
9. ¿Cómo comienza todo programa de arduino? ¿Qué característica tiene ésta?
Una funcion llamada Setup es en la que se inicializan las variables 
10. ¿Dónde se inicializan las variables?
Se inicializan en el Setup 
11. ¿Qué cualidad presentan las funciones y palabras reservadas de arduino?

12. ¿Cómo nos hace saber el editor de texto que reconoce una función o palabra
reservada?

13. Escribe el programa de encendido del led que le entra a la placa de arduino, y cuyo
programa se encuentra en el vídeo que estás viendo.
void setup (){ 
    pinmode(13,OUTPUT); 
}
void loop(){ 
    digtalWrite(13,HIGH); 
    delay(1000); 
    digitalWrite(13,LOW) 
    delay(1000); 
}
14. Describe cada línea de instrucción junto a su sintaxis.
void setup (){ //Para establecer las variables
    pinmode(13,OUTPUT); //Declaramos el pin de salida 13
}
void loop(){ //bucle
    digtalWrite(13,HIGH); //Encender
    delay(1000); //El tiempo que tarda en volver a apagarse
    digitalWrite(13,LOW) //Apagar
    delay(1000); //El tiempo que tarda en volver a encenderse
}
15. Realiza el programa y comprueba que sale.
