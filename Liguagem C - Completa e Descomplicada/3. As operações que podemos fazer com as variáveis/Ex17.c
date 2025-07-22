// Escreva um programa que leia um número inteiro e mostre o seu complemento
// bit a bit
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d",&x);

    printf("\n%d",x);

    printf("\n%d",~x);// operador ~ complemento de bit a bit 


    return 0;
} // end main