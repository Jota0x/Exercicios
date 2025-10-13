/*
Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■■ os números múltiplos de 2;
■■ os números múltiplos de 3;
■■ os números múltiplos de 2 e de 3.
*/
#include <stdio.h>

int main()
{
    int vetor[7];

    // le vetor
    for (int i = 0; i < 7; i++)
        scanf("%d", &vetor[i]);

    // trata multiplos
    for (int i = 0; i < 7; i++)
    {
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0)
            printf("Multiplo de 2 e de 3: %d\n", vetor[i]);
        else if (vetor[i] % 2 == 0)
            printf("Multiplo de 2: %d\n", vetor[i]);
        else if (vetor[i] % 3 == 0)
            printf("Multiplo de 3: %d\n", vetor[i]);
    } // end for


    return 0;
} // end main