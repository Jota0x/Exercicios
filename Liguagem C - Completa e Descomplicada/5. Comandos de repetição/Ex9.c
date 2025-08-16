// Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
// valor lido.
#include <stdio.h>

int main()
{
    int n, maior, menor;

    // le o primeiro numero
    scanf("%d", &n);

    maior = n;
    menor = n;

    // le o restante
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        } // end if
        else if (n < menor)
        {
            menor = n;
        } // end else if
    } // end for

    printf("Maior: %d Menor: %d", maior, menor);

    return 0;
} // end main