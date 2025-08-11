// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizan-
// do as seguintes fórmulas (onde h é a altura):
// ■■ para homens: (72.7 * h) – 58.
// ■■ para mulheres: (62.1 * h) – 44.7.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char sexo;
    float altura, pesoIdeal;

    scanf("%f%c", &altura, &sexo);

    if (sexo == 'M')
    {
        pesoIdeal = (72.7 * altura) - 58;
    } // end if
    else if (sexo == 'F')
    {
        pesoIdeal = (62.1 * altura) - 44.7;

    } // end else if
    else
        printf("Erro");

    printf("%f", pesoIdeal);

    return 0;
} // end main