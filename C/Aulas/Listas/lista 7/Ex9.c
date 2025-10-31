#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int soma = 0;
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);

    for (int i = 0; i < n; i++)
        soma += vetor[i];

    printf("%d", soma);

    free(vetor);

    return 0;
} // end main