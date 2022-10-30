#include <Wire.h>
#include<LiquidCrystal_I2C.h>

int TRIG = 3;
int ECHO = 4;
int DISTANCIA;
int DURACION;

int ultimaDistancia = 0;

LiquidCrystal_I2C lcd(0x27,16,2);




void setup()
{
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
 Serial.begin(9600);
 lcd.init();
 lcd.backlight();
}

void loop()
{
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  
  DURACION = pulseIn(ECHO, HIGH);
  DISTANCIA = (DURACION *0.034)/2;
  Serial.println(DISTANCIA);
  delay(200); 
  if (DISTANCIA != ultimaDistancia)
  {
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Dist: ");
    lcd.print(DISTANCIA);
    lcd.print(" cm");
    ultimaDistancia = DISTANCIA;
  }
  
  delay(500);
  
}
