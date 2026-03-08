/*
Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso etc.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));
    char *temp = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    int aux = strlen(palavra) - 1;
    int palindromo = 1; // eh verdadeiro

    // strcpy(temp, palavra);

    for (int i = 0; i < strlen(palavra); i++)
    {

        if (palavra[aux] != palavra[i])
            palindromo = 0;
        aux--;
    }

    if (palindromo == 1)
        printf("Eh palindromo");
    else if (palindromo == 0)
        printf("Nao eh palindromo");

    free(palavra);
    // free(temp);

    return 0;

} // end main