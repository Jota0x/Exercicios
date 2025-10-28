/*
Crie um programa que preencha duas matrizes 3  8 com números inteiros, calcule e mostre:
■■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3  8;
■■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3  8.
*/
#include <stdio.h>

int main()
{
    int A[3][8], B[3][8], soma[3][8], diferenca[3][8];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 8; j++)
            scanf("%d%d", &A[i][j], &B[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 8; j++)
        {
            soma[i][j] = A[i][j] + B[i][j];

            diferenca[i][j] = A[i][j] - B[i][j];
        }

    printf("\nSoma");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 8; j++)
            printf("%d ", soma[i][j]);

    printf("Diferenca\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 8; j++)
            printf("%d ", diferenca[i][j]);
    return 0;
} // end main