char HORARIO[4]={
    0b1000,
    0b0100,
    0b0010,
    0b0001

};

int cont;
void main()
{
    TRISA = 0x00;//todo salidas
    PORTA = 0; // iniciar con valor cero

    cont = 0;
    while (cont<4)
    {
        PORTA = HORARIO[cont];
        dela_ms(500);
        cont++;
    }
    

}