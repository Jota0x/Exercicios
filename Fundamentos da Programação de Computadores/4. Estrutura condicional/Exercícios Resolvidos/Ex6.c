// Faça um programa que receba um número inteiro e verifique se é par ou ímpar.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);

    // verifica c é par
    if (x % 2 == 0)
    {
        printf("Eh par");
    }
    // caso n seja, é impar
    else
        printf("Eh impar");

    return 0;
} // end main