/*
Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
Exemplo:
Frase: cOMPUTADOREs sÃO MÁQUINAs POTENTEs
saída:
cOMPUTADOREs
sÃO
MÁQUINAs
POTENTEs
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra = (char *)malloc(100 * sizeof(char));

    fgets(palavra, 100, stdin);

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] == ' ')
            printf("\n");
        else
            printf("%c", palavra[i]);
    }

    free(palavra);

    return 0;
} // end main