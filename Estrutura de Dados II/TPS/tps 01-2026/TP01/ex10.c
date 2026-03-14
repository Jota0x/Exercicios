#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    char *palavra = (char*)malloc(100 * sizeof(char));

    fgets(palavra,100,stdin);


    free(palavra);

    return 0;
}

// Calcula tamanho da String 
int tamanhoString(char* palavra)
{
    int aux;

    int i = 0;

    while(palavra[i] != '\0')
    {
        aux++;
        i++;
    }

    return aux;
}

bool isVogal(char *palavra,int tam)
{

    if(tam < 0)
        return true;
    else if(palavra[tam] != 'a' ||palavra[tam] != 'A' || palavra[tam] != 'e' || palavra[tam] != 'E' || palavra[tam] != 'i' || palavra[tam] != 'I' || palavra[tam] != 'o' || palavra[tam] != 'O' || palavra[tam] != 'u' || palavra[tam] != 'U')
        return false;
    else 
        return isVogal(palavra,tam - 1);
}

bool isConsoante(char *palavra,int tam)
{
    if(tam < 0)
        return true;
    else if(palavra[tam] == 'a' ||palavra[tam] == 'A' || palavra[tam] == 'e' || palavra[tam] == 'E' || palavra[tam] == 'i' || palavra[tam] == 'I' || palavra[tam] == 'o' || palavra[tam] == 'O' || palavra[tam] == 'u' || palavra[tam] == 'U')
        return false;
    else
        return isConsoante(palavra,tam - 1);
}

bool isInteiro(char *palavra,int tam)
{   
    if(palavra[0] == '-' || palavra[0] >= 48 && palavra[0] <= 57)
    {
    if(tam < 0)
        return true;
    else if(palavra[tam] < 48 || palavra[tam] > 57)
        return false;
    else
        return isInteiro(palavra,tam - 1);
    }
    else 
        return false;

}

bool isReal(char *palavra,int tam)
{
    if(palavra[0] == '-' || palavra[0] >= 48 && palavra[0] <= 57)
    {
        if(tam < 0)
            return true;
        else if(palavra[tam] < 48 || palavra[tam] > 57)
            return false;
        else
            return isReal(palavra,tam - 1);
    }
    else
        return false;
}