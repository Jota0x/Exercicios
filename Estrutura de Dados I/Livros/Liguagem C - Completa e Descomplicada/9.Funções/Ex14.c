/*
Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.
*/
#include <stdio.h>

int fat(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fat(n));

    return 0;
} // end main

int fat(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fat(n - 1);
} // end fat