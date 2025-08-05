// Faça um programa que receba o raio, calcule e mostre:
// a) o comprimento de uma esfera; sabe-se que c = 2 * p R;
// b) a área de uma esfera; sabe-se que A = p R2;
// c) o volume de uma esfera; sabe-se que v = ¾ * p R3
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float raio,comprimento,area,volume;

    scanf("%f",&raio);

    comprimento = 2 * (3.14 * raio);

    area = 3.14 * (raio * raio);

    volume = (3 * 3.14 * (raio * raio * raio))/4;

    printf("Comprimento: %f Area: %f Volume: %f",comprimento,area,volume);

    return 0;
}// end main