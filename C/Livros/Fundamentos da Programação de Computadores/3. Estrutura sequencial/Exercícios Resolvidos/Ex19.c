// cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
// o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
// atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
// estar em metros
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaDegraus, alturaDesejada, qtDegraus;

    scanf("%f %f", &alturaDegraus, &alturaDesejada);

    qtDegraus = alturaDesejada / alturaDegraus;

    printf("Quantidade de degraus: %.2f", qtDegraus);

    return 0;
} // end main