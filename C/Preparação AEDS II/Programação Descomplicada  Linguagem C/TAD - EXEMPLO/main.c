#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    float d;
    ponto *p, *q;

    // cria dois pontos
    p = ptoCria(10, 20);
    q = ptoCria(7, 25);

    d = ptoDistancia(p, q);

    printf("Distancia entre dois pontos: %.2f", d);

    // Libera a memória alocada pelos pontos
    ptoLibera(p);
    ptoLibera(q);

    return 0;
}