/*
Faça um programa para criptografar uma frase dada pelo usuário. Na criptografia, a frase deverá ser invertida
e as consoantes deverão ser trocadas por #.
Exemplo:
Frase: EU EsTOU NA EscOlA
saída: A#O##E A# UO##E UE
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *palavra = (char *)malloc(100 * sizeof(char));

    fgets(palavra, 100, stdin);

    int inicio = 0;

    char temp[100];

    // inverte string
    for (int i = strlen(palavra) - 1; i >= 0; i--)
    {
        temp[inicio] = palavra[i];
        inicio++;
    }

    strcpy(palavra, temp);

    for (int i = 0; i < strlen(palavra); i++)
        if (toupper(palavra[i]) != 'A' && toupper(palavra[i]) != 'E' && toupper(palavra[i]) != 'I' && toupper(palavra[i]) != 'O' && toupper(palavra[i]) != 'U' && toupper(palavra[i]) != ' ')
            palavra[i] = '*';

    printf("%s", palavra);

    free(palavra);

    return 0;

} // end main