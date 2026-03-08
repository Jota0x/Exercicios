// Faça um programa que leia um número inteiro positivo N e imprima todos os
// números naturais de 0 até N em ordem crescente
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d " ,i);
    }

    return 0;
} // end main