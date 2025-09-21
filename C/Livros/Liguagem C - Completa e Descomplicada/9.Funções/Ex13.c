/*
Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o somatório de 1 até n: 1 + 2 + 3 + ... + n
*/
#include <stdio.h>

int soma(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", soma(n));

    return 0;
} // end main

int soma(int n)
{
    int soma = 0;

    // loop principal
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    } // end for

    return soma;

} // end soma