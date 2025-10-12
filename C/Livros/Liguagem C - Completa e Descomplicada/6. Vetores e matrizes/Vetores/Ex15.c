/*
Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os ele-
mentos desse vetor e imprima o vetor na tela.
*/
#include <stdio.h>

int main()
{
    float N[10];
    float aux;

    for (int i = 0; i < 10; i++)
        scanf("%f", &N[i]);

    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
        {
            if (N[i] > N[j])
            {
                aux = N[i];
                N[i] = N[j];
                N[j] = aux;
            }
        }

    for (int i = 0; i < 10; i++)
        printf("%.2f ", N[i]);

    return 0;
} // end main