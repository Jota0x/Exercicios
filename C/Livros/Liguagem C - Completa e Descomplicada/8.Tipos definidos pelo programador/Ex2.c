/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (po-
sições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;

} Pontos;

Pontos pontos;

float distanciaPontos(int x, int y);

int main()
{
    scanf("%d%d", &pontos.x, &pontos.y);

    printf("%.2f", distanciaPontos(pontos.x, pontos.y));

    return 0;
} // end main

float distanciaPontos(int x, int y)
{
    float distancia = 0;

    distancia = sqrt((x * x) + (y * y));

    return distancia;
}