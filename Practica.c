unsigned int temp, conv;
void main() 
{
 ANSEL = 0x01; //0b00000001 habilitar entrada AN0
 ANSELH = 0; //configura los pines como entradas digitales
 PWM1_Init(5000);
 PWM1_Start();
 ADC_Init();
 do
 {
  temp = ADC_Read(0); //0-123
  conv = temp /4;    //0-255
  PWM1_Set_Duty(conv);
 }while(1);
}