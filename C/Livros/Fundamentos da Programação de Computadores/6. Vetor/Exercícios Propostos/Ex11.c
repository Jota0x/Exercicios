/*
Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares.
*/
#include <stdio.h>

int main()
{
    int vetor[10], par[10], impar[10];

    // controla tamanho dos vetores
    int contPar = 0, contImpar = 0;

    // loop para leitura
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    } // end for

    // loop para separação de par e impar
    for (int i = 0; i < 10; i++)
    {

        if (vetor[i] % 2 == 0)
        {
            par[contPar] = vetor[i];
            contPar++;
        }
        else
        {
            impar[contImpar] = vetor[i];
            contImpar++;
        }
    } // end for

    printf("Pares: ");
    // imprime par
    for (int i = 0; i < contPar; i++)
    {
        printf("%d ", par[i]);
    } // end for

    printf("\nImpares: ");
    // imprime impar
    for (int i = 0; i < contImpar; i++)
    {
        printf("%d ", impar[i]);
    }

    return 0;
} // end main