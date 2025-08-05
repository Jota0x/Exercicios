//Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
//terceiro ângulo. sabe-se que a soma dos ângulos de um triângulo é 180 graus.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angulo1,angulo2,angulo3;

    scanf("%f%f",&angulo1,&angulo2);

    angulo3 = 180 - (angulo1 - angulo2);

    printf("%f",angulo3);

    return 0;
}// end main