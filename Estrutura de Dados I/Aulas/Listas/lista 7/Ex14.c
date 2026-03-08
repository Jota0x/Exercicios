#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(char *a, char *b);
void permuta(char *string, int inicio, int fim);

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    permuta(palavra, 0, strlen(palavra) - 1);

    return 0;
} // end main

void troca(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permuta(char *string, int inicio, int fim)
{
    int i;

    // Caso Base: Quando 'inicio' for igual a 'fim', uma permutação completa foi formada.
    if (inicio == fim)
    {
        printf("%s ", string);
    }
    else
    {
        for (i = inicio; i <= fim; i++)
        {

            troca((string + inicio), (string + i));

            permuta(string, inicio + 1, fim);

            troca((string + inicio), (string + i));
        }
    }
}