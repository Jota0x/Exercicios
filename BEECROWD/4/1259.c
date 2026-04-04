#include <stdio.h>
#include <stdlib.h>
// arrumar depois
void ordena(int vetor[], int tam);

int main()
{

    int N;

    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &vetor[i]);

    ordena(vetor, N);

    for (int i = 0; i < N; i++)
        printf("%d\n", vetor[i]);

    return 0;
}

void ordena(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
        for (int j = i + 1; j < tam; j++)
        {
            if (vetor[i] % 2 != 0)
            {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
}