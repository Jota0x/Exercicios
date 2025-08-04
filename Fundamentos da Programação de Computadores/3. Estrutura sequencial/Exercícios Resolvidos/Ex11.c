// 1. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
// a) o número digitado ao quadrado;
// b) o número digitado ao cubo;
// c) a raiz quadrada do número digitado;
// d) a raiz cúbica do número digitad

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Num, quadrado = 0, cubo = 0, raizQuadrada, raizCubica;

    scanf("%f", &Num);

    quadrado = Num * Num;

    cubo = Num * Num * Num;

    raizQuadrada = sqrt(Num);

    raizCubica = cbrt(Num);

    printf("\nQuadrado: %.2f", quadrado);
    printf("\nCubo: %.2f", cubo);
    printf("\nRaiz Quadrada: %.2f", raizQuadrada);
    printf("\nRaiz Cubica: %.2f", raizCubica);

    return 0;
} // end main