// Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
// m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a veloci-
// dade em km/h e M em m/s.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Km, Ms = 0;

    scanf("%f", &Km); // le Km

    Ms = Km / 3.6;

    printf("%fm/s", Ms); // imprime valor de Ms

    return 0;
} // end main