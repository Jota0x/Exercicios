// Faça um programa que leia dois números inteiros e depois os imprima na ordem
// inversa em que eles foram lidos.
#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);// le dois inteiros

    printf("Valor lido: %d, %d", Y, X);// imprime os dois inteiros na ordem inversa

    return 0;
} // end main