#include <stdio.h>
#include <stdlib.h>

typedef struct Cubo cubo;

Cubo criarCubo();
void setAresta(Cubo *c,double aresta);
double getLado(Cubo *c);
double getArea(Cubo *c);
double getVolume(Cubo *c);
