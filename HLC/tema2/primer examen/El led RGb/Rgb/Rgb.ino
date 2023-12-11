#include <RGBMood.h>

int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int redPin2 = 3;
int bluePin2 = 5;
int greenPin2 = 6;
int ldrPin = 0;
RGBMood mood(redPin, greenPin, bluePin, redPin2, greenPin2, bluePin2); 
void setup() 
{
  pinMode(ldrPin, INPUT);
  mood.setMode(RGBMood::RANDOM_HUE_MODE);
  mood.setHoldingTime(2000);
  mood.setFadingSteps(150);
  mood.setFadingSpeed(50);
  mood.setHSB(random(359), 255, 255);
}
void loop() 
{
  int ambientLight = analogRead(ldrPin);
  if(ambientLight < 600)
  {
    mood.tick();
  }
  else
  {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(redPin2, LOW);
    digitalWrite(greenPin2, LOW);
    digitalWrite(bluePin2, LOW);
  }
}
