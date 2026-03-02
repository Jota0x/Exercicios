#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menor(int *vet,int N);
int Maior(int *vet,int N);
float Media(int *vet,int N);

int main()
{

    srand(time(NULL));

    int *vet1 = (int*)malloc(10 * sizeof(int));
    int *vet2 = (int*)malloc(10 * sizeof(int));

    // randomiza numeros de 0 a 100
    for(int i = 0; i < 10;i++)
    {
        vet1[i] = rand() % 100;
        vet2[i] = rand() % 100;
    }

    printf("Primeiro Vetor: ");

    for(int i = 0; i < 10;i++)
        printf("%d ",vet1[i]);

    
    printf("\nSegundo Vetor: ");
    for(int i= 0; i < 10;i++)
        printf("%d ",vet2[i]);

    printf("\nMenor ver1: %d Menor vet2: %d",Menor(vet1,10),Menor(vet2,10));
    printf("\nMaior vet1: %d Maior vet2: %d",Maior(vet1,10),Maior(vet2,10));
    printf("\nMedia vet1: %.2f Media vet2: %.2f\n",Media(vet1,10),Media(vet2,10));


    //libera memoria alocada
    free(vet1);
    free(vet2);

    return 0;
}

//Retorna maior
int Maior(int *vet,int N)
{
    int maior = 0;

    for(int i= 0; i < N;i++)
        if(vet[i] > maior)
            maior = vet[i];

    return maior;

}

// Retorna menor
int Menor(int *vet,int N)
{
    int menor = 100;

    for(int i = 0; i < N;i++)
        if(vet[i] < menor)
            menor = vet[i];

    return menor;

}

//Calcula média 
float Media(int *vet,int N)
{
    float media = 0;

    for(int i = 0; i < N;i++)
        media += vet[i];

    media = media/N;

    return media;

}