/*
Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>

int main()
{
    int x[8];
    int X, Y;

    for (int i = 0; i < 8; i++)
        scanf("%d", &x[i]);

    scanf("%d%d", &X, &Y);

    printf("%d", x[X] + x[Y]);

    return 0;
} // end main