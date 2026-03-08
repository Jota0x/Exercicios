#include <stdio.h>
#include <stdlib.h>

void preenche(int M[10][10]);
void troca(int M[10][10]);
void troca2(int M[10][10]);
void troca3(int M[10][10]);
void troca4(int M[10][10]);
void exibe(int M[10][10]);

int main()
{
    int M[10][10];

    preenche(M);
    troca(M);
    troca2(M);
    troca3(M);
    troca4(M);
    exibe(M);

    return 0;
} // end main

void preenche(int M[10][10])
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            scanf("%d", &M[i][j]);
}

void troca(int M[10][10])
{
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = M[1][i];
        M[1][i] = M[7][i];
        M[7][i] = aux;
    }

    // for (int i = 0; i < 10; i++)
    //   for (int j = 0; j < 10; j++)
    //     printf("%d ", M[i][i]);
}

void troca2(int M[10][10])
{
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = M[i][3];
        M[i][3] = M[i][9];
        M[i][9] = aux;
    }

    /*for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            printf("%d ", M[i][i]);*/
}

void troca3(int M[10][10])
{
    int aux;

    for (int i = 0; i < 10; i++)
    {
        aux = M[i][i];

        M[i][i] = M[i][(10 - 1) - i];

        M[i][(10 - 1) - i] = aux;
    }
}

void troca4(int M[10][10])
{
    int aux;

    for (int i = 0; i < 10; i++)
    {

        aux = M[4][i];

        M[4][i] = M[i][9];

        M[i][9] = aux;
    }
}

void exibe(int M[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
}