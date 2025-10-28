/*
Elabore um programa que preencha uma matriz M de ordem 4  6 e uma segunda matriz N de ordem 6 
4, calcule e imprima a soma das linhas de M com as colunas de N
*/
#include <stdio.h>

int main()
{
    int M[4][6], N[6][4];

    // le M
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            scanf("%d", &M[i][j]);

    // le N
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &N[i][j]);

    int aux = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("%d", M[i][aux] + N[aux][i]);
        aux++;
    }

    return 0;
} // end main