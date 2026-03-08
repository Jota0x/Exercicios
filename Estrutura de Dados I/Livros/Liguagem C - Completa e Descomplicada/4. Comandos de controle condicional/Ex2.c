// Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
// dois números forem iguais, imprima a mensagem “Números iguais”.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, y, maior;

    scanf("%d%d", &x, &y);

    if (x > y)
    {
        maior = x;
    } // end if
    else if (y > x)
    {
        maior = y;
    } // end else if
    else
        printf("Numeros iguais");

    printf("%d", maior);

    return 0;
} // end main