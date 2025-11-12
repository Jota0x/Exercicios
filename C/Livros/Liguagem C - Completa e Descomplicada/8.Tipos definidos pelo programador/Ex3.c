/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posi-
ções X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Pontos;

float distanciaPontos(int xA, int yA, int xB, int yB);

int main()
{
    Pontos p1, p2;

    // le pontos iniciais
    scanf("%d%d", &p1.x, &p1.y);

    // le pontos finais
    scanf("%d%d", &p2.x, &p2.y);

    printf("%.2f", distanciaPontos(p1.x, p1.y, p2.x, p2.y));

    return 0;
} // end main

float distanciaPontos(int xA, int yA, int xB, int yB)
{
    float distancia = 0;

    distancia = sqrt(((xA - xB) * (xA - xB)) + ((yA - yB) * (yA - yB)));

    return distancia;
}