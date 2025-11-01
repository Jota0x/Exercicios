/*
Sem usar a função strlen(), faça um programa que leia uma string e imprima
quantos caracteres ela possui.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    int contador = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
        contador++;

    printf("%d", contador);

    free(palavra);

    return 0;
} // end main