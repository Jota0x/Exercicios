/*
Faça um programa que preencha uma matriz 3  5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.
*/
#include <stdio.h>

int main()
{
    int matriz[3][5], aux = 0;

    // le matriz
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &matriz[3][5]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            if (matriz[i][j] > 15 && matriz[i][j] < 20)
                aux++;

    printf("Contador: %d", aux);

    return 0;

} // end main