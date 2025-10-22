/*
Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro con-
tendo os elementos dos dois vetores anteriores ordenados de maneira decrescente.
*/
#include <stdio.h>

int main()
{
    int a[10], b[10], c[20];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
    } // end for

    // junta os dois vetores
    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
            c[i] = a[i];
        else
            c[i] = b[i - 10];
    }

    int aux;

    // ordena vetor
    for (int i = 0; i < 20; i++)
        for (int j = i + 1; j < 20; j++)
            if (c[i] < c[j])
            {
                aux = c[i];
                c[i] = c[j];
                c[j] = aux;
            }

    for (int i = 0; i < 20; i++)
        printf("%d ", c[i]);

    return 0;
} // end main