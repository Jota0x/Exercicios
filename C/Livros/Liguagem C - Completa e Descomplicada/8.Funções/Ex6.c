/*
Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (índice de massa corporal) dessa pessoa:
IMC = peso/(altura * altura)]
*/
#include <stdio.h>

float IMC(float altura, float peso);

int main()
{
    float peso, altura;

    scanf("%f%f", &peso, &altura);

    printf("%.2f", IMC(altura, peso));

    return 0;
} // end main

float IMC(float altura, float peso)
{
    float IMC;

    IMC = peso / (altura * altura);

    return IMC;

} // end IMC