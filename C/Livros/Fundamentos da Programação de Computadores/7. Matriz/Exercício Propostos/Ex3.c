/*
Elabore um programa que preencha uma matriz 6  3, calcule e mostre:
■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.
*/
#include <stdio.h>

int main()
{
    int matriz[6][3];
    int linhaMaior = 0, colunaMaior = 0, linhaMenor = 0, colunaMenor = 0;

    // loop para leitura
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    //
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[0][0];
                linhaMaior = i;
                colunaMaior = j;
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[0][0];
                linhaMenor = i;
                colunaMenor = j;
            }
        }

    printf("Maior valor: %d [%d][%d]\n", maior, linhaMaior, colunaMaior);
    printf("Menor valor: %d [%d][%d]", menor, linhaMenor, colunaMenor);

    return 0;

} // end main