// Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
// tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
// sua ponta.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float angulo, alturaParedeChao, alturaParede, escada, radiano;

    scanf("%f %f", &angulo, &alturaParede);

    radiano = angulo * 3.14 / 180;

    escada = alturaParede / sin(radiano);

    printf("%f", escada);

    return 0;
} // end main