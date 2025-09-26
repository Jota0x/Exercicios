#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float raio;
    float altura;
} Cilindro;

Cilindro cilindro;

float area(Cilindro *cilindro);
float volume(Cilindro *cilindro);