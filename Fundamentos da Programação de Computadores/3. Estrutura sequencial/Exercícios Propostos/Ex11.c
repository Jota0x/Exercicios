// Faça um programa que calcule e mostre a área de um losango. sabe-se que: A = (diagonal maior * diagonal menor)/2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diagonalMaior, diagonalMenor, area = 0;

    scanf("%f%f", &diagonalMaior, &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("%f", area);

    return 0;

} // end main