#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //crea el objeto “lcd” con los pines de Rs, E, D4, D5, D6, D7
//Si meto la 10 seria el 8 para el rs el 9 para el Rw y el 10 para el E

void setup()
{
  lcd.begin(16, 2); //lo voy a inicializar con 16 columnas y dos filas
  lcd.setCursor(0, 0);
  lcd.clear(); //cuando yo haga un lcd.clear se borra todo

}

void loop()
{
  lcd.print("texto"); //me sacará por pantalla texto


}