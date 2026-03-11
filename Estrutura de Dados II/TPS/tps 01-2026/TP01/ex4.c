#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alteracao(char *palavra,int tam);

int main()
{

    char *palavra = (char*)malloc(100 * sizeof(char));

    fgets(palavra,100,stdin);

    char *resultado = alteracao(palavra,strlen(palavra));

    printf("%s\n",resultado);

    free(palavra);
    free(resultado);

    return 0;
}

char* alteracao(char *palavra,int tam)
{   
    int aux = 0;
    char *newPalavra = (char*)malloc(strlen(palavra) * sizeof(char));

    for(int i = tam - 1; i >= 0;i--)
    {
        newPalavra[aux] = palavra[i];
        aux++;
    }

    return newPalavra;
}