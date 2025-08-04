// Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a
// que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em
// que deseja pregar o quadro.
// lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tamanhoEscada, altura, distancia;

    scanf("%f %f", &tamanhoEscada, &altura);

    distancia = (tamanhoEscada * tamanhoEscada) + (altura * altura);

    distancia = sqrt(distancia);

    printf("%.2f metros", distancia);

    return 0;
} // end main