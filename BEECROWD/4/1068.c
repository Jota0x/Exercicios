#include <stdio.h>
#include <string.h>

int contar_parenteses(char *string);

int main()
{
    char *palavra;

    fgets(palavra, 1000, stdin);

    if (contar_parenteses(palavra) == 0)
        printf("correct\n");
    else
        printf("incorrect\n");

    return 0;
}

int contar_parenteses(char *string)
{
    int contador = 0;
    int tamanho = strlen(string) - 1;

    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] == ')')
            contador++;
        else if (string[i] == '(')
            contador--;
    }

    return contador;
}