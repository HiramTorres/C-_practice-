int foto = A1;
int lectura;
int led = 3;

void setup()
{
  pinMode(foto, INPUT);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
}

void loop()
{
   
  lectura= analogRead(foto);
  Serial.println(lectura);
  delay(100);
  
if (lectura <600)
  {
  digitalWrite(led,LOW);
  delay(1000);
  }
else 
  {
  digitalWrite(led,HIGH);
  delay(1000);
  }
}
