/*
Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco nú-
meros inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela
soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo
vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
tem no segundo vetor.
*/
#include <stdio.h>

int main()
{
    int A[10], B[5];
    int resultanteA[5], resultanteB[5];
    // le A
    for (int i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    // le B
    for (int i = 0; i < 5; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i] % 2 == 0)
            {
                resultanteA[i] = A[i] + A[j];
            }
        }
    }

    return 0;
} // end main