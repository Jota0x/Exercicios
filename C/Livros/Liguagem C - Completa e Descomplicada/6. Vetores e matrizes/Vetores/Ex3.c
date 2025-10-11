/*
Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores
*/
#include <stdio.h>

int main()
{
    int x[5];
    float media = 0;

    // le valores
    for (int i = 0; i < 5; i++)
        scanf("%d", &x[i]);

    // imprime valores e trata media
    for (int i = 0; i < 5; i++)
    {
        printf("%d", x[i]);
        media += x[i];
    } // end for

    printf("\nMedia: %.2f", (media / 5));

    return 0;
} // end main