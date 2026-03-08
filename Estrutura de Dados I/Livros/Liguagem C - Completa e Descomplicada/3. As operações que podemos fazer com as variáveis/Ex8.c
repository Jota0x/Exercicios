// Leia um valor que represente uma temperatura em graus Celsius e apresente-a
// convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
// 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Celsius, Fahrenheit = 0;

    scanf("%f",&Celsius); // le Celsius

    Fahrenheit = Celsius * (9.0/5.0) + 32;

    printf("Valor em Fahrenheit: %f",Fahrenheit);

    return 0;
}// end main