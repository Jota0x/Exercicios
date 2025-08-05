// João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
// multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
// João
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, conta1, conta2, contaAtrasada1, contaAtrasada2, restanteSalario;

    scanf("%f%f%f", &salario, &conta1, &conta2);

    contaAtrasada1 = conta1 + (conta1 * 0.02f);

    contaAtrasada2 = conta2 + (conta2 * 0.02f);

    restanteSalario = salario - (contaAtrasada1 + contaAtrasada2);

    printf("%f", restanteSalario);

    return 0;
}