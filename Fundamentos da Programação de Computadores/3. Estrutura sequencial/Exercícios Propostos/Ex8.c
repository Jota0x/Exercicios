// Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilos,gramas;

    scanf("%f",&quilos);

    gramas = quilos * 1000;

    printf("Valor em gramas: %.2f",gramas);

    return 0;
}// end main
