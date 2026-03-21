#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void inverte(char *palavra, int tam);
bool fim(char *palavra);

int main()
{
    // aloca memoria
    char *palavra = (char *)malloc(50 * sizeof(char));

    fgets(palavra, 50, stdin);

    // limpa \n
    palavra[strcspn(palavra, "\n")] = '\0';

    // loop principal
    // inverte enquanto != de FIM
    while (!fim(palavra))
    {

        int tam = strlen(palavra) - 1;

        inverte(palavra, tam);

        fgets(palavra, 50, stdin);

        // limpa \n
        palavra[strcspn(palavra, "\n")] = '\0';
    }

    // libera memoria
    free(palavra);

    return 0;
}

void inverte(char *palavra, int tam)
{

    // loop principal
    // inverte string
    for (int i = tam; i >= 0; i--)
        printf("%c", palavra[i]);

    printf("\n");
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