/*
Crie um programa que receba os valores antigo e atual de um produto. Chame uma sub-rotina que
determine o percentual de acréscimo entre esses valores. O resultado deverá ser mostrado no programa
principal.
*/
#include <stdio.h>

int main()
{
    int antigo, atual;

    scanf("%f%f", &antigo, &atual);

    printf("%f", acrescimo(antigo, atual));

    return 0;
} // end main

float acrescimo(int x, int y)
{
    int acrescimo;

    // calculo percentual
    acrescimo = (100 * y - 100 * x) / x;

    return acrescimo;

} // end acrescimo