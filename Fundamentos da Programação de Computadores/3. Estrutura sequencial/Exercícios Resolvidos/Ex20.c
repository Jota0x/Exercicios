// Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
// chão e encostada na parede e a altura da parede onde está a ponta da escada. calcule e mostre a me-
// dida dessa escada.
// Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
// com medidas de ângulos em radianos.
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