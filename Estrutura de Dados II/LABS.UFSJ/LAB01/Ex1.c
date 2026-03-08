#include <stdio.h>
#include <stdlib.h>

//protótipo da função
int negativos(float *vet,int N);


int main()
{
    int N;

    scanf("%d",&N);
    
    float *vet = (float*)malloc(N * sizeof(float));

    for(int i = 0; i < N;i++)
        scanf("%f",&vet[i]);

    printf("Negativos: %d\n",negativos(vet,N));

    free(vet);

    return 0;

}

//retorna numero de negativos
int negativos(float *vet,int N)
{
    int negativos = 0;

    for(int i = 0; i < N;i++)
        if(vet[i] < 0)
            negativos++;
        

    return negativos;

}