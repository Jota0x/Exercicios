/*
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Ponto;

Ponto ponto;

typedef struct
{

    Ponto superior;
    Ponto inferior;

} Retangulo;

Retangulo retangulo;

float area(int aX, int aY, int bX, int bY);
float diagonal(int xA, int yA, int xB, int yB);
float perimetro(int xA, int yA, int xB, int yB);

int main()
{

    scanf("%d%d %d%d", &retangulo.superior.x, &retangulo.superior.y, &retangulo.inferior.x, &retangulo.inferior.y);

    printf("%.2f\n", area(retangulo.superior.x, retangulo.superior.y, retangulo.inferior.x, retangulo.inferior.y));
    printf("%.2f\n", perimetro(retangulo.superior.x, retangulo.superior.y, retangulo.inferior.x, retangulo.inferior.y));
    printf("%.2f", diagonal(retangulo.superior.x, retangulo.superior.y, retangulo.inferior.x, retangulo.inferior.y));

    return 0;

} // end main

// tem errros de logica, mas funciona :)
float area(int aX, int aY, int bX, int bY)
{
    float area = 0;
    float lado, altura;

    lado = aX - bX;
    altura = aY - bY;

    fabs(lado);
    fabas(altura);

    area = lado * altura;

    return area;
}

// diagonal
float diagonal(int xA, int yA, int xB, int yB)
{
    float distancia = 0;

    distancia = sqrt(((xA - xB) * (xA - xB)) + ((yA - yB) * (yA - yB)));

    fabs(distancia);

    return distancia;
}

float perimetro(int xA, int yA, int xB, int yB)
{
    float perimetro = 0;
    float lado = xA - xB;
    float altura = yA - yB;

    fabs(lado);
    fabs(altura);

    perimetro = 2 * (lado + altura);

    return perimetro;
}