#include "cubo.h"

typedef struct
{
    double aresta;
}Cubo;

Cubo criarCubo()
{
    Cubo *c = (Cubo*)malloc(sizeof(Cubo));

    c->aresta = 0;

    return *c;
}

void setAresta(Cubo *c,double a)
{
    c->aresta = a;
}

//retorna lado 
double getLado(Cubo *c)
{
    return c->aresta;
}

//retorna area total do cubo 
double getArea(Cubo *c)
{
    return (c->aresta * c->aresta) * 6;
}

double getVolume(Cubo *c)
{
    return c->aresta * c->aresta * c->aresta;
}