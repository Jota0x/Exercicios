/*
Faça um programa que preencha uma matriz 3  3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz.
*/
#include <stdio.h>

int main()
{

    float matriz[3][3];
    int x;

    scanf("%d", &x);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%f", &matriz[i][j]);

    float resultante[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            resultante[i][j] = matriz[i][j] * x;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            printf("%.2f ", resultante[i][j]);

    return 0;
} // end main