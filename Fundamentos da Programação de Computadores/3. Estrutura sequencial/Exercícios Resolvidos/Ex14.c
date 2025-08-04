//  Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa;
// b) quantos anos ela terá em 2050.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, anoAtual, idade = 0, idade2050 = 0;

    scanf("%d%d", &ano, &anoAtual);

    idade = anoAtual - ano;

    idade2050 = 2050 - ano;

    printf("Idade: %d  Idade em 2050: %d", idade, idade2050);

    return 0;
} // end main