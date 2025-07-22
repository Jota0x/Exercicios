// Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
// Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
// através da fórmula dada. Imprima o resultado.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, hipotenusa;

    scanf("%f %f", &a, &b);

    hipotenusa = sqrt((a * a) + (b * b));

    printf("Hipostenusa: %f", hipotenusa);

    return 0;
} // end main