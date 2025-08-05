// Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
// de diagonais desse polígono. sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lados, diagonais;

    scanf("%f", &lados);

    diagonais = lados * (lados - 3) / 2;

    printf("%f", diagonais);

    return 0;
} // end main