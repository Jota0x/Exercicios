/*
Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    for (int i = 0; palavra[i] > '\0'; i++)
    {
        palavra[i] = toupper(palavra[i]);
    }

    printf("%s", palavra);

    free(palavra);

    return 0;
} // end main