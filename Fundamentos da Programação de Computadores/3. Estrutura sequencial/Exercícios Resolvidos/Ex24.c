// Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
//  mostre a hora digitada apenas em minutos. lembre-se de que:
//  ■■ para quatro e meia, deve-se digitar 4.30;
//  ■■ os minutos vão de 0 a 59.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas, minutos, horaMinutos;
    int hora;

    scanf("%f", &horas);

    hora = horas; // parte inteira da hora digitada

    minutos = horas - hora;

    horaMinutos = (minutos * 100) + (hora * 60);

    printf("%f", horaMinutos);

    return 0;
} // end main