#include <stdio.h>

int main()
{
    // variaveis
    int a = 1, b = 1, L, aux;

    // le L
    scanf("%d", &L);

    // loop principal
    while (a < L)
    {
        printf(" %d ", a);

        aux = b;

        b += a;

        a = aux;

    } // end for

    return 0;
}