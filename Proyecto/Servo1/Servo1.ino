#include <Servo.h>
Servo servo;

int A = 3;
int B = 4;
int C = 5;
int D = 6;
int E = 7;
int F = 8;
int G = 9;
int d4 = 10;


void setup()
{
  servo.attach(11);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(d4, OUTPUT);


}

void loop()
{
  servo.write(0);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  delay(1000);
  
  servo.write(10);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);
  
  servo.write(20);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(1000);
  
  
  servo.write(30);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(40);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(50);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(60);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(70);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);
  
  servo.write(80);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(90);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(80);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(70);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);
  
  servo.write(60);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(50);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(40);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);
  
  servo.write(30);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(1000);

  servo.write(20);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(1000); 
    
  servo.write(10);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);

  servo.write(0);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);  
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  delay(1000);
}
