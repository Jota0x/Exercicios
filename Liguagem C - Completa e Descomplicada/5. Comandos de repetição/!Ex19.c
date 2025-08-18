// Faça um programa que calcule e escreva o valor de S:
#include <stdio.h>

int main()
{
    double numerador = 1;
    double S = 0;

    for (int denominador = 1; denominador <= 55; denominador++)
    {
        S = S + (numerador / denominador);
        numerador += 2;
    } // end for

    printf("%.2lf", S);

    return 0;

} // end main()
