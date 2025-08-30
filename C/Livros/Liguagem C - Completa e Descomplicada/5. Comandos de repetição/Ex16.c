// Em matemática, o número harmônico designado por Hn define-se como o enési-
// mo termo da série harmônica. Ou seja:
// Apresente um programa que calcule o valor de qualquer Hn.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float harmonico = 0;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        harmonico += (1.0f / i);

    } // end for

    printf("%f", harmonico);

    return 0;
} // end main