// Faça um programa que calcule e mostre a área de um círculo. sabe-se que: Área = p * R2
#include <stdlib.h>
#include <stdio.h>
#define PI 3, 14
int main()
{
    float raio, area = 0;

    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("%f", area);

    return 0;
} // end main