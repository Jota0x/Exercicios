// Faça um programa que receba o salário base e o tempo de serviço de um funcionário. calcule e mostre:
// ■■ O imposto, conforme a tabela a seguir.
// ■ A gratificação, de acordo com a tabela a seguir.
// ■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
// ■■ A categoria, que está na tabela a seguir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, tempoServico, imposto, gratificacao, salarioLiquido;

    scanf("%f%f");

    // analise imposto
    if (salario < 200)
    {
        imposto = 0;
    } // end if
    else if (salario >= 200 && salario <= 450)
    {
        imposto = salario * 0.03f;
    } // end else if
    else if (salario > 450 && salario < 700)
    {
        imposto = salario * 0.08f;
    } // end else if
    else
        imposto = salario * 0.12f;

    // analise gratificação
    if (salario > 500)
    {
        if (tempoServico <= 3)
        {
            gratificacao = 20;
        } // end if
        else
            gratificacao = 30;
    } // end if
    else if (tempoServico <= 3)
    {
        gratificacao = 23;
    } // end if
    else if (tempoServico > 3 && tempoServico <= 6)
    {
        gratificacao = 35;
    } // end else if
    else
        gratificacao = 33;

    salarioLiquido = salario + gratificacao - imposto;

    // analise da gratificação
    if (salarioLiquido <= 350)
    {
        printf("A");
    } // end if
    else if (salarioLiquido > 350 && salarioLiquido <= 600)
    {
        printf("B");
    } // end if
    else
        printf("C");

    return 0;
} // end main