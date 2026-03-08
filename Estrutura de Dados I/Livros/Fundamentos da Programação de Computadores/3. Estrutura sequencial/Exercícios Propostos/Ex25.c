// Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
// mostre:
// a) a hora digitada convertida em minutos;
// b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
// c) o total dos minutos convertidos em segundos.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, minuto, horaMinutos, totalMinutos, totalSegundos;

    scanf("%d%d", &hora, &minuto);

    horaMinutos = hora * 60;

    totalMinutos = horaMinutos + minuto;

    totalSegundos = totalMinutos * 60;

    printf("Hora em minutos: %d  Total de Minutos: %d  Total de Seegundos: %d", horaMinutos, totalMinutos, totalSegundos);

    return 0;
} // end main