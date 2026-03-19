#include <stdio.h>
#include <stdlib.h>


int main()
{

    return 0;
}

void bubble(int vetor[], int tam)
{

    for(int i = 0; i < tam;i++)
        for(int j = 0; j < tam;j++)
                if(vetor[i] > vetor[j])
                    swap(vetor[i],vetor[j]);
                    
}

void swap(int x,int y)  
{
    int aux = x;

    x = y;

    y = aux;


}