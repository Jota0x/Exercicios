/*
Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.
*/
#include <stdio.h>

int main()
{
    int vetor[10];

    // loop para leitura
    for (int i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

    // loop principal
    // traca nulo por 1
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == NULL)
            vetor[i] = 1;
    } // end for

    // loop para escrta
    for (int i = 0; i < 10; i++)
        printf("%d", vetor[i]);

    return 0;
    
} // end main