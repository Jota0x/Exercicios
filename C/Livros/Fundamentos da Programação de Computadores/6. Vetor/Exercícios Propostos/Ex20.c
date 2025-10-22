/*
Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os nú-
meros positivos.
*/
#include <stdio.h>

int main()
{

    int a[10];

    // le vetor
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    // trata positivo
    for (int i = 0; i < 10; i++)
        if (a[i] > 0)
            printf("%d", a[i]);

    return 0;
} // end main