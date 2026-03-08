// Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
// segundo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, subtracao = 0;

    scanf("%d%d", &X, &Y);

    subtracao = X - Y;

    printf("subtracao: %d", subtracao);

    return 0;
}// end main