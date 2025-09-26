#include "cubo.h"

float aresta(Cubo *cubo)
{
    float volume = 0, aresta = 0;

    volume = (cubo->lado * cubo->lado * cubo->lado);

    aresta = cbrt(volume);

    return aresta;

} // end aresta

float area(Cubo *cubo)
{
    float area = 0;

    area = (cubo->lado * cubo->lado) * 6;

    return area;
} // end area

float volume(Cubo *cubo)
{
    float volume = 0;

    volume = (cubo->lado * cubo->lado * cubo->lado);

    return volume;

} // end volume