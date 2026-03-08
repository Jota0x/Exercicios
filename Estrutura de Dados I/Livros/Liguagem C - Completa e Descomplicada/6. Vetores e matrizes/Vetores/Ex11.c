/*
Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcu-
le o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números.
*/
#include <stdio.h>

int main()
{
    int N[20], Q[20];

    for (int i = 0; i < 20; i++)
        scanf("%d", &N[i]);

    for (int i = 0; i < 20; i++)
        Q[i] = (N[i] * N[i]);

    for (int i = 0; i < 20; i++)
        printf("N: %d Q: %d", N[i], Q[i]);
        
    return 0;
} // end main