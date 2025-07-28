// Faça um programa que receba três notas, calcule e mostre a média aritmética
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media = 0; // media = 0 para n guardar lixo

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("%f", media);

    return 0;

} // end main