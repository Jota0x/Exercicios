#include <stdio.h>
#include <stdlib.h>

void leA(int A[4][6]);
void leB(int B[4][6]);
void soma(int A[4][6], int B[4][6]);
void subtracao(int A[4][6], int B[4][6]);

int main()
{
    int A[4][6], B[4][6];

    leA(A);
    leB(B);
    printf("%d ", soma);
    printf("\n");
    printf("%d ", subtracao);

    return 0;
} // end main

void leA(int A[4][6])
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            scanf("%d", &A[i][j]);
}

void leB(int B[4][6])
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            scanf("%d", &B[i][j]);
}

void soma(int A[4][6], int B[4][6])
{
    int resultante[4][6];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            resultante[i][j] = A[i][j] + B[i][j];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            printf("%d ", resultante[i][j]);
}

void subtracao(int A[4][6], int B[4][6])
{
    int resultante[4][6];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            resultante[i][j] = A[i][j] - B[i][j];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            printf("%d ", resultante[i][j]);
}