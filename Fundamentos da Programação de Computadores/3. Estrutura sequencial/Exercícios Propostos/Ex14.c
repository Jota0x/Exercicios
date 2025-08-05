// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa em anos;
// b) a idade dessa pessoa em meses;
// c) a idade dessa pessoa em dias;
// d) a idade dessa pessoa em semanas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoNascimento, anoAtual, anos, meses, dias, semanas;

    scanf("%d%d", &anoNascimento, &anoAtual);

    anos = anoAtual - anoNascimento;

    meses = anos * 12;

    semanas = meses * 4;

    dias = semanas * 7;

    printf("Anos: %d Meses: %d Dias: %d Semanas: %d", anos, meses, dias, semanas);

    return 0;

} // end main