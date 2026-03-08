#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    int vogal = 0;
    int consoante = 0;

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
            vogal++;
        else
            consoante++;
    }

    printf("Vogais: %d\n", vogal);
    printf("Consoantes: %d", consoante);

    free(palavra);
    return 0;
} // end main