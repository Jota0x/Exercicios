/*
Faça um programa contendo uma sub-rotina que receba três números inteiros a, b e c, sendo a maior
que 1. A sub-rotina deverá somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e
c) e retornar o resultado para ser impresso.
*/
#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    printf("%d", soma(x, y, z));

    return 0;
} // end main

int soma(int a, int b, int c)
{
    int soma = 0;

    // loop principal
    for (int i = b + 1; i < c; i++)
    {
        if (i % a == 0)
        {
            soma += i;
        } // end if
    } // end for

    return soma;
}