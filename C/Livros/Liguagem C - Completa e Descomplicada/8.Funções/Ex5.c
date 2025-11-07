/*
screva uma função para o cálculo do volume de uma esfera
V = 4/3p * r3,
em que p = 3.1414592 valor do raio r deve ser passado por parâmetro.
*/
#include <stdio.h>
#define PI 3.1414592

float volume(int x);

int main()
{
    float raio;

    scanf("%f", &raio);

    printf("%.2f", volume(raio));
    return 0;
} // end main

float volume(int x)
{
    float volume;

    volume = 4 / (3 * PI * (x * x * x));

    return volume;
} // end volume