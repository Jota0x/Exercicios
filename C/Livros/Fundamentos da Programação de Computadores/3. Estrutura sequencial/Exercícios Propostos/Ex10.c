// Faça um programa que calcule e mostre a área de um quadrado. sabe-se que: A = lado * lado.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;

    scanf("%f", &lado);

    area = lado * lado;

    printf("Valor da area: %.2f", area);

    return 0;
} // end main