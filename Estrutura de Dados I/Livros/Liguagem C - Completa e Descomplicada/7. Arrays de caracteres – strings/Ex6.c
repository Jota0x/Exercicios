/*
Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela
possui.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I' || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U')
        {
            palavra[i] = '*';
        }
    }

    printf("%s", palavra);

    free(palavra);

    return 0;
} // end main