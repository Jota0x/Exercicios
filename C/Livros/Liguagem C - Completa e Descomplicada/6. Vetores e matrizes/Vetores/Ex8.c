/*
Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.
*/
#include <stdio.h>

int main()
{
    int x[10], negativo = 0, soma = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &x[i]);

    for (int i = 0; i < 10; i++)
    {
        if (x[i] < 0)
            negativo++;
        else
            soma += x[i];

    } // end for

    printf("Soma: %d Quantidade de negativos: %d", soma, negativo);
    
    return 0;
} // end  main