// Faça um programa que receba uma temperatura em celsius, calcule e mostre essa temperatura em Fahrenheit. sabe-se que F = 180*(c + 32)/100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheint;

    scanf("%f", &celsius);

    fahrenheint = 180 * (celsius + 32) / 100;

    printf("%f",fahrenheint);

    return 0;
}