#include <stdio.h>

int main()
{
    //declaração variaveis
    float numerador,denominador,numeroDecimal;

    //le numerador e denominador
    scanf("%f%f",&numerador,&denominador);

    numeroDecimal = numerador/denominador;

    printf("%f",numeroDecimal);

    return 0;
}// end main