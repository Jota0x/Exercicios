// Faça um programa que receba o peso de uma pessoa, calcule e mostre:
// a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, engordar, emagrecer;

    scanf("%f", &peso);

    engordar = peso + (peso * 0.15f);

    emagrecer = peso - (peso * 0.20f);

    printf("Peso: %.2fKg Engordar: %.2fKg Emagrecer: %.2fKg ",peso,engordar,emagrecer);

    return 0;
} // end main
