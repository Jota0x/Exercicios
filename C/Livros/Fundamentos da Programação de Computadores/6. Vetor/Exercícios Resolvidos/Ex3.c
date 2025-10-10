/*
Faça um programa que preencha dois vetores de dez elementos numéricos cada um e mostre o vetor resultante
da intercalação deles.
*/
#include <stdio.h>

int main()
{

    int a[10], b[10], c[20];

    for (int i = 0; i < 10; i++)
    {
        // le numeros
        scanf("%d", &a[i]);
    } // end for

    for (int i = 0; i < 10; i++)
    {
        // le numeros
        scanf("%d", &b[i]);
    } // end for

    int j = 0;

    // junta os dois vetores
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[j];
        }
        else
        {
            c[i] = b[j];

            j++;
        }

    } // end for

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", c[i]);
    } // end for

    return 0;
} // end main