// Faça um programa que receba um número real, encontre e mostre:
// a) a parte inteira desse número;
// b) a parte fracionária desse número;
// c) o arredondamento desse número.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float num, fracionario, arredondamento;
    int inteiro;

    scanf("%f", &num);

    inteiro = num;

    fracionario = num - round(num);

    arredondamento = round(num);

    printf("Num: %.2f Inteiro: %d Fracionaario: %.2f Arredondamento: %.2f ", num, inteiro, fracionario, arredondamento);

    return 0;
} // end main