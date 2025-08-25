// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
// seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
// Homens: (72,7 * h) – 58
// Mulheres: (62,1 * h) – 44,7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    scanf("%f %c",&altura,&sexo);

    if (sexo == 'F')
    {
        pesoIdeal = (62.1 * altura) - 44, 7;
    } // end if
    else
        pesoIdeal = (72.7 * altura) - 58;

    printf("%f", pesoIdeal);

    return 0;
} // end main
