#include <stdio.h>
#include <stdlib.h>

struct racional
{
    int numerador;
    int denominador;
};

typedef struct racional Racional;

Racional *cria_racional(int, int);
Racional *soma(Racional *, Racional *);
Racional *subtrai(Racional *, Racional *);
Racional *divide(Racional *, Racional *);
int compara(Racional *, Racional *); // 0=diferente e 1=igual
void destroi_racional(Racional *);