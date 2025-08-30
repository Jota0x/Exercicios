// Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto núme-
// ro que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha
// que o usuário digitará quatro números diferentes
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, num;

    scanf("%d %d %d %d", &x, &y, &z, &num);

    // logica
    if (num > z)
    {
        printf("%d %d %d %d", num, z, y, x);
    }
    else if (num > y && num < z)
    {
        printf("%d %d %d %d", z, num, y, x);
    }
    else if (num > x && num < y)
    {
        printf("%d %d %d %d", z, y, num, x);
    }
    // nunhum dos casos
    else
        printf("%d %d %d %d", z, y, x, num);

    return 0;
} // end main