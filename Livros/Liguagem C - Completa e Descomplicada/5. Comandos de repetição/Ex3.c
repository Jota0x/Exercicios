// Faça um programa que leia um número inteiro N e depois imprima os N primei-
// ros números naturais ímpares.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        if (i % 2 != 0) // verifica c é impar
        {
            printf("%d ", i);
        } // end if

    } // end for

    return 0;
} // end main