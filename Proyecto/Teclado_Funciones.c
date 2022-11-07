#include <Keypad.h>
#include <Servo.h>

const byte numRows = 4;
const byte numCols = 4;
int motor = 3;
int buzz = 2;
int mv = A3;
int ledr = A0;
int leda = A1;
int ledv = A2;
int foco = 13;

Servo servo;



char keymap [numRows][numCols]=
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}

};

byte rowPins [numRows] = {11,10,9,8};
byte colPins[numCols] = {7,6,5,4};

Keypad teclado = Keypad(makeKeymap(keymap),rowPins,colPins,numRows,numCols);

char caracter;
  
void setup()
{
	Serial.begin(9600);
  	pinMode(ledr,OUTPUT);
    pinMode(leda,OUTPUT);
    pinMode(ledv,OUTPUT);
  	pinMode(motor,OUTPUT);
  	pinMode(buzz, OUTPUT);
  	pinMode(mv, OUTPUT);
  	pinMode(foco,OUTPUT);
  	servo.attach(12);
 	Serial.begin(9600);
  	servo.write(0);
}

void loop()
{
  	
	caracter = teclado.getKey();
    Serial.println(caracter);
    delay(200);
  	
  
 	
  switch (caracter)
  {
    
    //Encender el motor
    case '1':
    digitalWrite(motor, HIGH);
    break;
    
    //Encender el buzzer
    case '2':
    digitalWrite(buzz, HIGH);
    break;
    
    //Encender motor de vibración
    case '3':
    digitalWrite(mv, HIGH);
    break;
    
    //Encender foco
    case '4':
    digitalWrite(foco, HIGH);
    break;
    
    // Apagar motor
    case '5':
    digitalWrite(motor, LOW);
    break;

    // Apagar buzzer
    case '6':
    digitalWrite(buzz,LOW);
    break;
    
    // Apagar motor de vibración
    case '7':
    digitalWrite(mv,LOW);
    break;
    
    // Apagar foco
    case '8':
    digitalWrite(foco, LOW);
    break;
    
    // Encender led RGB color rosa
    case '9':
    analogWrite(ledr, 234);
    analogWrite(ledv, 0);
    analogWrite(leda, 128);
    break;
    
    // Apagar todos los dispositivos
    case '0':
    analogWrite(ledr, 0);
    analogWrite(ledv, 0);
    analogWrite(leda, 0);
    servo.write(0);
    digitalWrite(motor, LOW);
    digitalWrite(buzz,LOW);
    digitalWrite(mv,LOW);
    digitalWrite(foco, LOW);
    break;
      
    // Encender led RGB color amarillo
    case '*':
    analogWrite(ledr, 248);
    analogWrite(ledv, 243);
    analogWrite(leda, 43);
    break;
    
    // Encender led RGB color blanco
    case '#':
    analogWrite(ledr, 255);
    analogWrite(ledv, 255);
    analogWrite(leda, 255);
    break;
      
    //Posicionar servo en 45 grados
    case 'A':
    servo.write(45);
    break;
    
    //Posicionar servo en 90 grados
    case 'B':
    servo.write(90);
    break;
    
    //Posicionar servo en 135 grados
    case 'C':  
    servo.write(130);
    break ;
    
    //Posicionar servo en 180 grados
    case 'D':
    servo.write(180); 
    break;
       
    default:
    break;
  
  	
  
  
  }
  
 	
      
  	
  
}