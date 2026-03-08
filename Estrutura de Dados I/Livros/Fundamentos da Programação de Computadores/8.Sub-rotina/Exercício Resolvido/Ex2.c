/*
Faça um programa contendo uma sub-rotina que receba dois números positivos por parâmetro e re-
torne a soma dos N números inteiros existentes entre eles.
*/
#include <stdio.h>

int somaAlgarismo(int a, int b);

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d%d", somaAlgarismo(x, y));

    return 0;
} // end main

int somaAlgarismo(int a, int b)
{
    int soma = 0;

    // loop principal
    for (int i = a + 1; i < b; i++)
    {
        soma += i;
    } // end for

    return soma;

} // end somaAlgorismo