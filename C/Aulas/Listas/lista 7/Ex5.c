#include <stdio.h>
#include <stdlib.h>

void preenche(int M[5][5]);
int quintaLinha(int M[5][5]);
int segundaColuna(int M[5][5]);
int diagonalPrincipal(int M[5][5]);
int diagonalSecundaria(int M[5][5]);
int todosElementos(int M[5][5]);

int main()
{
    int M[5][5];

    preenche(M);

    printf("%d\n", quintaLinha(M));
    printf("%d\n", segundaColuna(M));
    printf("%d\n", diagonalPrincipal(M));
    printf("%d\n", diagonalSecundaria(M));
    printf("%d\n", todosElementos(M));

    return 0;
} // end main

void preenche(int M[5][5])
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &M[i][j]);
}

int quintaLinha(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma += M[4][i];

    return soma;
}

int segundaColuna(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma += M[i][2];

    return soma;
}

int diagonalPrincipal(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i == j)
                soma += M[i][j];

    return soma;
}

int diagonalSecundaria(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i + j == 4)
                soma += M[i][j];

    return soma;
}

int todosElementos(int M[5][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            soma += M[i][j];

    return soma;
}