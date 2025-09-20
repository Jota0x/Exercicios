/*
Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
#include <stdio.h>

float converter(float x);

int main()
{
    float x;

    scanf("%f", &x);

    printf("%.2f", converter(x));

} // end main

float converter(float x)
{
    float celsius;

    celsius = (x - 32.0) * (5.0 / 9.0);

    return celsius;
}