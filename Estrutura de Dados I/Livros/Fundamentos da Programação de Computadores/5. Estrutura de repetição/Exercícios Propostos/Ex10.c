/*
Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, soma = 0, somaPrimo = 0;

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);

        soma += n;

        // loop para verificação de numero primo
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                printf("Nao eh primo\n");
            } // end if
            else
                somaPrimo += n;
        } // end for

    } // end for

    printf("Soma: %d Soma Primo: %d", soma, somaPrimo);

    return 0;
} // end main