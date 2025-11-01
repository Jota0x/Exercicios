/*
Faça um programa que leia uma string e a imprima de trás para a frente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra = malloc(50 * sizeof(char));

    scanf("%s", palavra);

    for (int i = strlen(palavra) - 1; i >= 0; i--)
        printf("%c", palavra[i]);

    free(palavra);

    return 0;
} // end main