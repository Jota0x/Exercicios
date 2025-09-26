#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    float lado;
} Cubo;

Cubo cubo;

float aresta(Cubo *cubo);
float area(Cubo *cubo);
float volume(Cubo *cubo);