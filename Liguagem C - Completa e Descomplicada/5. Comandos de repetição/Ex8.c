//  Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main()
{
    int n, media = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        soma += n;
    } // end for

    media = soma / 10;

    printf("%d", media);

    return 0;
} // end main