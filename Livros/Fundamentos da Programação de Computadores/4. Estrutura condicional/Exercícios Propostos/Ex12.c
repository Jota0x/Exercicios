// Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
// mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e des-
// contado o imposto de 7% sobre o salário
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, valorReceber, gratificacao, imposto;

    scanf("%f", &salario);

    imposto = salario * 0.07f;

    if (salario <= 350)
    {
        gratificacao = 100;

        valorReceber = salario - imposto + gratificacao;

        printf("%f", valorReceber);
    }

    else if (salario > 350 && salario <= 600)
    {
        gratificacao = 75;

        valorReceber = salario - imposto + gratificacao;

        printf("%f", valorReceber);
    }

    else if (salario > 600 && salario <= 900)
    {
        gratificacao = 50;

        valorReceber = salario - imposto + gratificacao;

        printf("%f", valorReceber);
    }

    else
        gratificacao = 35;

    valorReceber = salario - imposto + gratificacao;

    printf("%f", valorReceber);

    return 0;

} // end main