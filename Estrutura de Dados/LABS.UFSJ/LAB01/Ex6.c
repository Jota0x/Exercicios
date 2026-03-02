#include <stdio.h>
#include <stdlib.h>

void decrescente(char letra[],int N);

int main()
{
    char letra[10] = {'a','b','c','d','e','f','g','h','i','j'};

    decrescente(letra,10 - 1);
    printf("\n");

    return 0;
} //end main

//imprime vetor na ordem decescente 
void decrescente(char letra[],int indice)
{

    if(indice < 0) return;
    else
    printf(" %c",letra[indice]);
    decrescente(letra,indice - 1);

}