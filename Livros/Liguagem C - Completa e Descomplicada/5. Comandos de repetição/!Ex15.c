// Elabore um programa que faça a leitura de vários números inteiros até que se digi-
// te um número negativo. O programa tem de retornar o maior e o menor número
// lido.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior, menor;

    scanf("%d", &n);

    menor = n;
    maior = n;

    do
    {

        scanf("%d", &n); // le o restante dos numeros
        if (n > maior)
        {
            maior = n;
        } // end if
        else if (n < menor)
        {
            menor = n;
        } // end else if

    } while (n > 0);

    printf("Maior: %d Menor: %d", maior, menor);

    return 0;
} // end main