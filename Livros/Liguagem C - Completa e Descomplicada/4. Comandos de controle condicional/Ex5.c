// Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// O número digitado ao quadrado.•
// A raiz quadrada do número digitado.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, quadrado, dobro;

    scanf("%d", &x);

    if (x > 0)
    {
        quadrado = x * x;

        dobro = x * 2;

        printf("Quadrado: %d Dobro: %d", quadrado, dobro);
    } // end if
    else
        printf("Numero nao positivo");

    return 0;
} // end main