// Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
// tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
// Altura
// Peso
// Até 60 Entre 60-90 (inclusive) Acima de 90
// Menor do que 1,20 A D G
// 1,20-1,70 B E H
// Maior do que 1,70 C F I
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    char classificacao;

    scanf("%f%f", &altura, &peso);

    if (altura < 1.20)
    {
        if (peso < 60)
        {
            classificacao = 'A';
        } // end if
        else if (peso >= 60 && peso <= 90)
        {
            classificacao = 'D';
        } // end else if
        else
            classificacao = 'G';
    } // end if
    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso < 60)
        {
            classificacao = 'B';

        } // end if
        else if (peso >= 60 && peso <= 90)
        {
            classificacao = 'E';
        } // end else if
        else
            classificacao = 'H';
    } // end else if
    else if (peso < 60)
    {
        classificacao = 'C';
    } // end if
    else if (peso >= 60 && peso <= 90)
    {
        classificacao = 'F';
    } // end else if
    else
        classificacao = 'I';

    printf(" %c", classificacao);

    return 0;
} // end main