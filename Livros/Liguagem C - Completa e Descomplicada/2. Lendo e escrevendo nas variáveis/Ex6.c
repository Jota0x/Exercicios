// Faça um programa que leia um valor do tipo double e depois o imprima na forma
// de notação científica.
#include <stdio.h>

int main()
{
    double X;

    scanf("%f", &X); // le double

    printf("Valor em notacao cientifica: %e", X); // %e imprime valor em notação cinetífica

    return 0;

} // end main