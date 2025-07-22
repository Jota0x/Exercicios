// Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
// idade e do ano atual.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoNascimento = 0, anoAtual = 2025;

    scanf("%d", &idade); // le idade

    anoNascimento = anoAtual - idade;

    printf("Ano de Nascimento: %d", anoNascimento);// imprime valor de anoNascimento

    return 0;
} // end main