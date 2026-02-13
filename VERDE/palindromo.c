#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ehPalindromo(char *palavra);

int main()
{

    // aloca memoria para palavra
    char *palavra = (char *)malloc(1000 * sizeof(char));

    fgets(palavra, 1000, stdin);

    // remove o \n e substitui por \0
    palavra[strcspn(palavra, "\n")] = '\0';

    while (strcmp(palavra, "FIM") != 0)
    {

        if (ehPalindromo(palavra) == false)
            printf("NAO\n");
        else
            printf("SIM\n");

        fgets(palavra, 50, stdin);

        // remove o \n e substitui por \0
        palavra[strcspn(palavra, "\n")] = '\0';
    }

    printf("%s", palavra);

    free(palavra);

    return 0;
}

bool ehPalindromo(char *palavra)
{
    bool palindromo = true;

    int final = strlen(palavra) - 1;

    for (int i = 0; i < strlen(palavra) / 2; i++)
    {
        if (palavra[i] != palavra[final - i])
            palindromo = false;
    }

    return palindromo;
}
