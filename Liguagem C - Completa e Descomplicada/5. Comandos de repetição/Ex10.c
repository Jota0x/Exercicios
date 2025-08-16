// Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im-
// prima sua média.
#include <stdio.h>

int main()
{
    int n, soma;
    float media;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            soma += n;
        }
    } // end main

    media = soma / 10;

    printf("%f", media);

    return 0;
} // end main