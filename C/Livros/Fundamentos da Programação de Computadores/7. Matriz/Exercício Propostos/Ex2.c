/*
Crie um programa que preencha uma matriz 2  4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha;
■■ a média dos elementos pares da matriz
*/
#include <stdio.h>

int main()
{

    int matriz[2][4], par = 0;
    float media = 0;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);

    for (int i = 0; i < 2; i++)
    {
        int aux = 0;
        for (int j = 0; j < 4; j++)
        {   
            if (matriz[i][j] > 12 && matriz[i][j] < 20)
            {
                aux++;
            }
            if (matriz[i][j] % 2 == 0)
            {
                par++;
                media += matriz[i][j];
            }
        }
        printf("Por linha: %d\n", aux);
    }

    printf("Media dos pares: %.2f", media / par);

    return 0;
} // end main