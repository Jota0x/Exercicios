// Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, veri-
// fique e mostre a classificação dessa pessoa.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;

    scanf("%f", &altura, &peso);

    if (altura < 1.20)
    {
        if (peso < 60)
        {
            printf("A");
        } // end if
        else if (peso >= 60 && peso <= 90)
        {
            printf("D");
        } // end else if
        else
            printf("G");

    } // end if
    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso < 60)
        {
            printf("B");
        } // end if
        else if (peso >= 60 && peso <= 90)
        {
            printf("E");
        } // end else if
        else
            printf("H");
    } // end else if
    else if (peso < 60)
    {
        printf("C");
    } // end if
    else if (peso >= 60 && peso <= 90)
    {
        printf("F");
    } // end else if
    else
        printf("I");

    return 0;
} // end main