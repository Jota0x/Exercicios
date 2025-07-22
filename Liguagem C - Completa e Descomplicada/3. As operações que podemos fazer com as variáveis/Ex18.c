//Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
//esquerda e à direita, do primeiro número pelo segundo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,direita,esquerda;

    scanf("%d %d",&x,&y);

    direita = x >> y;

    esquerda = x << y;

    printf("Esquerda: %d  Direita: %d",esquerda,direita);

    return 0;
}// end main