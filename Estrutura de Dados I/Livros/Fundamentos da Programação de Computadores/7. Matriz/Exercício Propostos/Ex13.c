/*
Elabore um programa que: preencha uma matriz 6  4; recalcule a matriz digitada, onde cada linha de-
verá ser multiplicada pelo maior elemento da linha em questão; mostre a matriz resultante.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[6][4];

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);

    



    return 0;
} // end main