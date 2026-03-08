/*
Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (lembre-se: o vetor B
pode não ser completamente preenchido.)
*/
#include <stdio.h>

int main()
{
    int A[10];
    int B[10];

    // loop para leitura
    for (int i = 0; i < 10; i++)
        scanf("%d", A[i]);

    // variavel de controle para vetor B
    int aux = 0;

    // loop para compactação de vetor
    for (int i = 0; i < 10; i++)
        if (A[i] != NULL || A[i] > 0)
            B[aux] = A[i];

    return 0;
} // end main