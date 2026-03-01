#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Maiuscula(char palavra[], int tamanho);

int main()
{
    char palavra[50];

    fgets(palavra, 50, stdin);

    printf("%d", Maiuscula(palavra, strlen((palavra)) - 1));

    return 0;
}

int Maiuscula(char palavra[], int tamanho)
{
    int maiuscula;

    if (tamanho < 0)
        return 0;

    if (palavra[tamanho] >= 'A' && palavra[tamanho] <= 'Z')
        maiuscula = 1;
    else
        maiuscula = 0;

    return maiuscula + Maiuscula(palavra, tamanho - 1);
}