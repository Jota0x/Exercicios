// Encontrar Duplicatas: Crie um programa que, dado um array de números inteiros, identifique e imprima todos os elementos que aparecem mais de uma vez.
#include <stdio.h>

int main()
{
    int n[10];

    // le vetor
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);

    } // end for

    // verifica valores iguais no vetor
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            // verifica valores iguais
            if (n[i] == n[j])
            {
                printf("Repetido: %d\n", n[j]);
            } // end if
        } // end for

    } // end for

    return 0;
} // end main