/*
Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = p * raio2 * altura,
em que p = 3.1414592
*/
#include <stdio.h>
#define PI 3.1414592

float volume(int x, int y);

int main()
{
    float altura, raio;

    scanf("%f%f", &altura, &raio);

    printf("%.2f", volume(raio, altura));

    return 0;
} // end main

float volume(int x, int y)
{
    float volume;

    volume = PI * ((x * x) * y);

    return volume;
} // end volume