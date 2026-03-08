// Faça um programa que leia um número inteiro positivo N e imprima todos os
// números naturais de 0 até N em ordem decrescente.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",&N);

    for(int i = N; i >= 0; i--)
    {
        printf("%d ",i);
    }// end for

    return 0;
}// end main