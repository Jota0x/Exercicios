// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <stdio.h>
#include <stdlib.h>

int mian()
{
    float nota1, nota2, nota3, media = 0;
    int peso1, peso2, peso3;

    scanf("%f %f %f", &nota1, &nota2, &nota3); // le notas

    scanf("%d %d %d", &peso1, &peso2, &peso3); // le peso

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / peso1 + peso2 + peso3;

    printf("%f", media);

    return 0;

} // end main