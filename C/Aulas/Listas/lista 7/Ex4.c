#include <stdio.h>

int main()
{
    int n;
    int *vetor = malloc(n * sizeof(int));

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d\n", &vetor[i]);

    int maior = vetor[0];

    for (int i = 0; i < n; i++)
        if (vetor[i] > maior)
            maior = vetor[i];

    printf("%d", maior);

    free(vetor);

    return 0;
}