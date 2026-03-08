// Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
// Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
// pelo menos, o custo do espetáculo seja alcançado
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo, precoConvite, qtConvites;

    scanf("%f%f", &custo, &precoConvite);

    qtConvites = custo / precoConvite;

    printf("%.2f", qtConvites);

    return 0;

} // end main