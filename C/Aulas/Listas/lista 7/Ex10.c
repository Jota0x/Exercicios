#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);

    int aux;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }

    for (int i = 0; i < n; i++)
        printf("%d ", vetor[i]);

    free(vetor);

    return 0;
} // end main