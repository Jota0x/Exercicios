/*
Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores
resultantes. O primeiro vetor resultante deve conter os números positivos e o segundo, os números ne-
gativos. Cada vetor resultante vai ter, no máximo, oito posições, que não poderão ser completamente
utilizadas.
*/
#include <stdio.h>

int main()
{
    int num[8], positivo[8], negativo[8];
    int p = 0, n = 0;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] > 0)
        {
            positivo[p] == num[i];
            p++;
        } // end if
        else if (num[i] < 0)
        {
            positivo[n] == num[i];
            n++;
        } // end else if

    } // end for

    // le negativo
    for (int i = 0; i < n; i++)
    {
        printf("Negativo: %d", negativo[i]);
    } // end for

    // le positivo
    for (int i = 0; i < p; i++)
    {
        printf("Positivo: %d", positivo[i]);
    } // end for

    return 0;
} // end main