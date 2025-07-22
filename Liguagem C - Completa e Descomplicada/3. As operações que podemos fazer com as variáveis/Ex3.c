// Faça um programa que leia três valores inteiros e mostre sua soma.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y,Z,soma = 0;

    scanf("%d %d %d",&X,&Y,&Z);// le 3 inteiros

    soma = X + Y + Z;

    printf("Soma: %d",soma);// imprime valor da soma

    return 0;
}// end main