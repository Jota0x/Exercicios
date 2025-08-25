// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
// derando peso 2 para a primeira e peso 3 para a segunda.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media = 0;

    scanf("%f%f", &nota1, &nota2);

    media = (2 * nota1) + (3 * nota2) / 5;

    printf("Media: %f", media);

    return 0;
} // end main