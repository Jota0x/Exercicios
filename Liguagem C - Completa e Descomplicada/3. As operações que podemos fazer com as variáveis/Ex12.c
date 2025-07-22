// Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
// O volume de um cilindro circular é calculado por meio da seguinte fórmula:
// V = p * raio2 * altura,
// em que p = 3.141592
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    float altura, raio, area;

    scanf("%f %f", &raio, &altura);// le raio e altura 

    area = (PI * (raio * raio)) * altura;

    printf("Area: %f",area); // imprime area

    return 0;
} // end main