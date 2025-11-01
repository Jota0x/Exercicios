/*
Escreva um programa que leia uma string do teclado e converta todos os seus ca-
racteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *palavra = malloc(50 * sizeof(char));

    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
        palavra[i] = tolower(palavra[i]);

    printf("%s", palavra);

    free(palavra);

    return 0;
} // end main