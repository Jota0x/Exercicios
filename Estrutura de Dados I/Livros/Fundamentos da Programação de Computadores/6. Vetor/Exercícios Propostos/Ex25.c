/*
Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, di-
vida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.
*/
#include <stdio.h>

int main()
{
    int vetor[15];

    // le vetor
    for (int i = 0; i < 15; i++)
        scanf("%d", &vetor[i]);

    int maior = vetor[0];

    // acha maior
    for (int i = 0; i < 15; i++)
        if (vetor[i] > maior)
            maior = vetor[i];

    int resultante[15];

    for (int i = 0; i < 15; i++)
    {
        resultante[i] == vetor[i] / maior;
    }

    for (int i = 0; i < 15; i++)
        printf("%d ", resultante[i]);

    return 0;
} // end main