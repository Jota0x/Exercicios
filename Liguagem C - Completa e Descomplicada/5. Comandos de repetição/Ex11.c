// Faça um algoritmo que leia um número positivo e imprima seus divisores. Exem-
// plo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d eh divisor\n", i);
        } // end if
    } // end for

    return 0;
} // end main