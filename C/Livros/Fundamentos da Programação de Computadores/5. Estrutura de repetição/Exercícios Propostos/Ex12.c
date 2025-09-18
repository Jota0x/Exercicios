/*
Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.
*/

// prototipo função
int ehPrimo(int num);

#include <stdio.h>
#include <math.h>

    int main()
{
    int num;
    int aux = 0;

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        // le numero
        scanf("%d", &num);

        if (ehPrimo(num))
        {
            aux++;
        }

    } // end for

    printf("%d", aux);

    return 0;
} // end main

int ehPrimo(int num)
{
    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}