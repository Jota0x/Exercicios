#include <stdio.h>

int main()
{
    int pessoas, posicao, pontosIND;
    int aux = 0;

    scanf("%d %d", &pessoas, &posicao);

    int x[pessoas];

    // leitura de pontos
    for (int i = 0; i < pessoas; i++)
    {
        scanf("%d", &x[i]);

    } // end for

    // trata posicao
    for (int i = 0; i < pessoas; i++)
    {
        if (x[i] >= 1)
        {
            if (x[i] >= x[posicao - 1])
            {
                aux++;
            }
        }
    } // end for

    printf("%d", aux);

    return 0;
} // end main