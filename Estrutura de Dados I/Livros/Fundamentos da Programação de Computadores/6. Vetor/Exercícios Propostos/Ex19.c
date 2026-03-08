/*
Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/
#include <stdio.h>

int main()
{
    int a[10], b[10], c[10];

    // le vetores
    for (int i = 0; i < 10; i++)
        scanf("%d%d", &a[i], &b[i]);

    // calculo do vetor resultante
    for (int i = 0; i < 10; i++)
        c[i] = (a[i] * b[i]);

    // vetor resultante
    for (int i = 0; i < 10; i++)
        printf("%d", c[i]);

    return 0;
} // end main