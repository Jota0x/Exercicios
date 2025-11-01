/*
Faça um programa que leia uma string e imprima as quatro primeiras letras dela
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    printf("%.4s", palavra);

    free(palavra);

    return 0;
} // end main