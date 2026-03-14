#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int tamanhoString(char *palavra);
void ordenacao(char *palavra);
bool isAnagrama(char *palavra1,char *palavra2);

int main()
{
    char *palavra1 = (char*)malloc(100 * sizeof(char));
    char *palavra2 = (char*)malloc(100 * sizeof(char));

    fgets(palavra1,100,stdin);
    fgets(palavra2,100,stdin);

    ordenacao(palavra1);
    ordenacao(palavra2);

    if(isAnagrama(palavra1,palavra2))
        printf("SIM\n");
    else
        printf("NAO\n");
    
    free(palavra1);
    free(palavra2);

    return 0;
}

int tamanhoString(char *palavra)
{   
    int contador = 0;
    int aux = 0;

    while(palavra[aux] != '\0')
    {
        contador++;
        aux++;
    }

    return contador - 1;

}


void ordenacao(char *palavra)
{   

    char aux;

    for(int i = 0; i < tamanhoString(palavra);i++)
        for(int j = i + 1; j < tamanhoString(palavra);j++)
        {
            if(palavra[j] < palavra[i])
            {
                aux = palavra[i];
                palavra[i] = palavra[j];
                palavra[j] = aux;
            }

        }

}

bool isAnagrama(char *palavra1, char *palavra2)
{
    bool anagrama = true;

    if(tamanhoString(palavra1) - tamanhoString(palavra2) != 0)
        anagrama = false;
    else
        for(int i = 0; i < tamanhoString(palavra1);i++)
            if(palavra1[i] != palavra2[i])
                anagrama = false;
    
    return anagrama;
        
}