#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numeroMaiuscula(char palavra[]);

int main()
{
    char palavra[50];

    fgets(palavra, 50, stdin);

    printf("%d", numeroMaiuscula(palavra));

    return 0;
} // end main

int numeroMaiuscula(char palavra[])
{
    int maiuscula = 0;

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
            maiuscula++;
    }

    return maiuscula;
}