/*
Elabore uma função que receba três números inteiros como parâmetro, represen-
tando horas, minutos e segundos. A função deve retornar esse horário convertido
em segundos.
*/
#include <stdio.h>

int segundos(int horas, int minutos, int segundos);

int main()
{
    int horas, minutos, segundos;

    scanf("%d%d%d", &horas, &minutos, &segundos);

    printf("%d",segundos);

    return 0;
} // end main

int segundos(int horas, int minutos, int segundos)
{
    int tempo;

    tempo = (horas * 3600) + (60 * minutos) + segundos;

    return tempo;

} // end segundos
