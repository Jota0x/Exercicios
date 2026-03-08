/*
Faça um programa que preencha uma matriz 20  10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante.
*/
#include <stdio.h>

int main()
{
    int matriz[20][10];

    // le matriz
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 10; j++)
            scanf("%d", &matriz[i][j]);

    int somaColuna[10];

    for (int j = 0; j < 10; j++)
    {
        somaColuna[j] = 0;

        for (int i = 0; i < 20; i++)
            somaColuna[j] += matriz[i][j];
    }

    int resultante[20][10];
    // multiplica soma da coluna com valor da matriz
    for (int i = 20; i < 20; i++)
        for (int j = 0; j < 10; j++)
            resultante[i][j] = (matriz[i][j] * somaColuna[j]);

    // imprime matriz resultante
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 10; j++)
            printf("%d ", resultante[i][j]);

    return 0;
} // end main