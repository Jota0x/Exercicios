/*
Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra = malloc(50 * sizeof(char));

    scanf("%s", palavra);

    char *temp = malloc(50 * (sizeof(char)));
    int aux = 0;

    for (int i = strlen(palavra) - 1; i >= 0; i--)
    {
        temp[aux] = palavra[i];
        aux++;
    }

    temp[aux] = '\0'; // coloca \0 no final da string

    strcpy(palavra, temp); // copia tem em palavra

    printf("%s\n", palavra);

    free(palavra);
    free(temp);

    return 0;
} // end main