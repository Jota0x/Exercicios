// Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número
// de dependentes do funcionário e a quantidade de horas extras trabalhadas. calcule e mostre o salário
// a receber do funcionário de acordo com as regras a seguir:
// ■■ O valor da hora trabalhada é igual a 1/5 do salário mínimo.
// ■■ O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora traba-
// lhada.
// ■■ Para cada dependente, acrescentar R$ 32,00.
// ■■ Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
// ■■ O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas
// extras.
// ■■ calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:
// ■ O salário líquido é igual ao salário bruto menos IRRF.
// ■■ A gratificação é de acordo com a tabela a seguir:
// ■ O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioLiquido, impostoRenda, salarioBruto, salarioMin, horasTrabalhadas, numDependentes, horasExtras, salarioReceber, valorHora, salarioMes, valorDependente, valorHoraExtra, gratificacao;

    scanf("%f%f%f%f%f", &salarioMin, &horasTrabalhadas, &numDependentes, &horasExtras);

    valorHora = salarioMin / 5;

    salarioMes = horasTrabalhadas * valorHora;

    valorDependente = numDependentes * 32;

    valorHoraExtra = valorHora + (valorHoraExtra * 0.50f);

    salarioBruto = salarioMes + valorDependente + valorHoraExtra;

    // analise imposto de Renda
    if (salarioBruto < 200)
    {
        impostoRenda = 0;
    } // end if
    else if (salarioBruto >= 200 && salarioBruto <= 500)
    {
        impostoRenda = salarioBruto * 0.10f;
    } // end else if
    else
        impostoRenda = salarioBruto * 0.20f;

    salarioLiquido = salarioBruto - impostoRenda;

    // analise da gratificação
    if (salarioLiquido <= 350)
    {
        gratificacao = 100;
    } // end if
    else
        gratificacao = 50;

    salarioReceber = salarioLiquido + gratificacao;

    return 0;
} // end main