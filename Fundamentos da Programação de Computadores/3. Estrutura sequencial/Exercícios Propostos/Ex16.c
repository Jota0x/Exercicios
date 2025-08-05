// Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float cateto1,cateto2,hipotenusa;

    scanf("%f%f",&cateto1,&cateto2);

    hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);

    hipotenusa = sqrt(hipotenusa);

    printf("%.2f",hipotenusa);

    return 0;
}// end main