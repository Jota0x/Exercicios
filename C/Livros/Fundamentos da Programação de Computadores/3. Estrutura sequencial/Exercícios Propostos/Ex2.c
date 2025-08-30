// Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, multiplicacao = 0;

    scanf("%d%d%d", &x, &y, &z);

    multiplicacao = x * y * z;

    printf("Multiplicacao: %d",multiplicacao);

    return 0;
} // end main