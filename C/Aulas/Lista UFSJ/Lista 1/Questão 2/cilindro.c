#include "cilindro.h"

#define PI 3.14159265359

float area(Cilindro *cilindro)
{
    float area = 0;

    area = 2 * PI * cilindro->raio * (cilindro->raio + cilindro->altura);

    return area;
} // end area

float volume(Cilindro *cilindro)
{
    float volume;

    volume = PI * cilindro->raio * cilindro->raio * cilindro->altura;

    return volume;
} // end volume