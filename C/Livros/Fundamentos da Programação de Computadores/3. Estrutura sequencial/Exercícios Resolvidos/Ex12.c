// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Num1, Num2, potencia1 = 0, potencia2 = 0;

    scanf("%f %f", &Num1, &Num2);

    potencia1 = pow(Num1, Num2);

    potencia2 = pow(Num2, Num1);

    printf("Resultado: %.2f %.2f", potencia1, potencia2);

    return 0;
} // fim main