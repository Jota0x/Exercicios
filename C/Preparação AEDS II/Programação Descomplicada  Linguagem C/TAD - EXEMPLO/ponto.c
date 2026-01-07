#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

typedef struct ponto
{
    float x;
    float y;
} Ponto;

// ALoca e retorna um ponto com cordenadas x e y
Ponto *ptoCria(float x, float y)
{
    Ponto *p = malloc(sizeof(Ponto));

    // Verifica se a Alocação funcionou
    if (p != NULL)
    {
        p->x = x;
        p->y = y;
    }

    return p;
}

// Libera memoria alocada por ponto
void ptoLibera(Ponto *p)
{
    free(p);
}

// Recupera por referência, o valor de um ponto
void ptoAcessa(Ponto *p, float *x, float *y)
{
    *x = p->x;
    *y = p->y;
}

// Atribui a um ponto as coordenadas x e y
void ptoAtribui(Ponto *p, float x, float y)
{
    p->x = x;
    p->y = y;
}

// Calcula a distância entre dois pontos 
float ptoDistancia(Ponto *p1, Ponto *p2)
{
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}