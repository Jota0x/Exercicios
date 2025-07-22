// Elabore um programa que leia dois números inteiros e exiba o resultado das ope-
// rações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, exclusivo, eBIt, ouBit;

    scanf("%d %d", &x, &y);

    exclusivo = x ^ y; // retorna 1 se os bits são diferentes

    eBIt = x & y; // retorna 1 se ambos os bits sao 1

    ouBit = x | y; //retorna 1 se pelo menos 1 bit é 1

    printf("\nOu exclusivo: %d", exclusivo);
    printf("\nOu bit a bit: %d", ouBit);
    printf("\nE bit a bit: %d", eBIt);

    return 0;
} // end main