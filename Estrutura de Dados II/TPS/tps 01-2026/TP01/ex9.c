#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void ciframento(char *palavra, int tam);
bool fim(char *palavra);

int main()
{
    char *palavra = (char *)malloc(100 * sizeof(char));

    scanf(" %[^\n]", palavra);

    while (!fim(palavra))
    {
        ciframento(palavra, strlen(palavra) - 1);
        printf("\n"); // apenas para formatação

        scanf(" %[^\n]", palavra);
    }

    free(palavra);

    return 0;
}

// ciframento
void ciframento(char *palavra, int tam)
{
    if (tam < 0)
        return;

    ciframento(palavra, tam - 1);

    if (palavra[tam] >= 0 && palavra[tam] <= 126)
        printf("%c", palavra[tam] + 3);
    else
        printf("%c", palavra[tam]);
}

// verifica fim
bool fim(char *palavra)
{
    char fim[] = "FIM";

    if (strlen(fim) == strlen(palavra))
    {
        for (int i = 0; i < strlen(palavra); i++)
            if (palavra[i] != fim[i])
                return false;
    }
    else
        return false;

    return true;
}