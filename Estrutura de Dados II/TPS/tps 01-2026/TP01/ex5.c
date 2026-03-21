#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int soma(char *digito);
bool fim(char *palavra);

int main()
{
    char *digito = (char *)malloc(100 * sizeof(char));

    scanf(" %[^\n]", digito);

    while (!fim(digito))
    {
        printf("%d\n", soma(digito));

        scanf(" %[^\n]", digito);
    }

    free(digito);

    return 0;
}

// soma digitos
int soma(char *digito)
{
    int soma = 0;
    int aux = 0;

    while (digito[aux] != '\0')
    {   
        //diminui 48 do digito recebido TABELA ASCII
        soma += digito[aux] - 48;

        aux++;
    }

    return soma;
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