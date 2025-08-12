// Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
// acrescido de bonificação e de auxílio escola.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario = 0, bonificacao = 0, auxilioEscola = 0;

    scanf("%f", &salario);

    // analise da bonificação
    if (salario < 500)
    {
        bonificacao = salario * 0.05f;
    } // end if
    else if (salario >= 500 && salario <= 1200)
    {
        bonificacao = salario * 0.12f;
    } // end else if
    else
        bonificacao = 0;

    // analise auxilio Escola
    if (salario < 600)
    {
        auxilioEscola = 500;
    } // end if
    else
        auxilioEscola = 100;

    novoSalario = salario + bonificacao + auxilioEscola;

    printf("%f", novoSalario);

    return 0;
} // end main