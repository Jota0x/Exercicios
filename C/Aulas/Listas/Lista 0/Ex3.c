#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> // permite o uso de acento

int main()
{
    // configura o idioma 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // decalração das variaveis
    float base, altura, perimetro, area, diagonal;

    // le base e altura
    scanf("%f%f", &base, &altura);

    // perimetro = soma de todos os lados
    perimetro = (2 * base) + (2 * altura);

    // area = base * altura
    area = base * altura;

    // calculo da diagonal
    diagonal = sqrt((base * base) + (altura * altura));

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n",area);
    printf("Diagonal: %.2f",diagonal);

    return 0;
} // end main