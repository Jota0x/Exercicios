#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool vogal(char palavra[],int tam);
bool consoante(char palavra[],int tam);
bool inteiro(char palavra[],int tam);
bool real(char palavra[],int tam);

// ========================================================= //
int main()
{
    char palavra[100];

    fgets(palavra,100,stdin);

    vogal(palavra,strlen(palavra));
    consoante(palavra,strlen(palavra));
    inteiro(palavra,strlen(palavra));
    real(palavra,strlen(palavra));

    return 0;
}
// ========================================================= //


bool vogal(char palavra[],int tam)
{
    int aux = 0;
    bool vogal = false;

    //verifica vogal
    for(int i = 0; i < tam;i++)
        if(tollower(palavra[i]) == 'a' || tollower(palavra[i]) == 'e' || tollower(palavra[i]) == 'i' || tollower(palavra[i]) == 'o' || tollower(palavra[i] == 'u'))
            aux++;
    
      if(aux == tam)
            vogal = true;

    return vogal;
}

bool consoante(char palavra[],int tam)
{
    int aux = 0;
    bool consoante = false;

    //verifica vogal
    for(int i = 0; i < tam;i++)
        if(tollower(palavra[i]) != 'a' || tollower(palavra[i]) != 'e' || tollower(palavra[i]) != 'i' || tollower(palavra[i]) != 'o' || tollower(palavra[i] != 'u'))
            aux++;
    
      if(aux == tam)
            consoante = true;

    return consoante;
}

bool inteiro(char palavra[],int tam)
{
    int aux = 0;
    bool inteiro = false;

    for(int i = 0; i < tam;i++)
        if(isdigit(palavra[i]))
            aux++;

    if(aux == tam)
        inteiro = true;

    return inteiro;
}

bool real(char palavra[],int tam)
{
    int aux = 0,ponto = 0;
    bool real = false;


    for(int i = 0; i < tam;i++)
    {
        //verifica quantidade de pontos 
        if(palavra[i] == '.')
            ponto++;
        
        //verifica c character esta entre 0 - 9
        if(isdigit(palavra[i]))
            aux++;
    }   

    //trata real
    if((aux + ponto) == tam && ponto <= 1)
        real = true;


    return real;
}