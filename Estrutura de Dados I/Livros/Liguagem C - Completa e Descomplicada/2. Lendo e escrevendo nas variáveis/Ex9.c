// Faça um programa que leia dois valores do tipo float. Use um único comando de
// leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
// foram lidos.
#include <stdio.h>

int main()
{
    float X,Y;

    scanf("%f %f",&X,&Y);// le dois reais

    printf("Valor lido: %f, %f",Y,X);// imprime reias na ordem inversa

    return 0;
}// end main