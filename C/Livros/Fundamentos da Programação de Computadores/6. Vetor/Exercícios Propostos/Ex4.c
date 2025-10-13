/*
Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram.
*/
#include <stdio.h>

int main()
{
    int vetor[15];

    for (int i = 0; i < 15; i++)
        scanf("%d", &vetor[i]);

    for (int i = 0; i < 15; i++)
        if (vetor[i] == 30)
            printf("%d ", i);
    return 0;
} // end main