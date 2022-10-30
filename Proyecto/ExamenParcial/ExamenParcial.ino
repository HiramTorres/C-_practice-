#include <Servo.h>
Servo servo;

int foto = A1;
int foto2 = A2;
int foto3 = A3;
int lectura;
int lectura2;
int lectura3;
int bombilla = 3;
int promedio;
int duracion;
int distancia;
int echo = 6;
int trig = 7;

void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo, INPUT);
  pinMode(foto, INPUT);
  pinMode(foto2, INPUT);
  pinMode(foto3, INPUT);
  servo.attach(8);
  pinMode(bombilla, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{

  // Fotoresistencias
  lectura = analogRead(foto);
  lectura2 = analogRead(foto2);
  lectura3 = analogRead(foto3);
  promedio = (lectura + lectura2 + lectura3)/3.0;
  delay(100);

    // Condicionales
  if (promedio <600)
    {
    digitalWrite(bombilla,LOW);
    delay(500);
    }
  else 
    {
    digitalWrite(bombilla,HIGH);
    delay(500);
    }
  
  //Código de sensor ultrasónico
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 58.2;
  Serial.println(distancia);
  delay(200); 
  
  //Servo
   if (distancia<= 50)
     servo.write(90);
   else
     servo.write(0);
   
}
