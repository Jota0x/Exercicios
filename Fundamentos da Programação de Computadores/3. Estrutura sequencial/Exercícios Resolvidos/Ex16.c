// Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
// mostre o salário a receber, seguindo estas regras:
// a) a hora trabalhada vale a metade do salário mínimo.
// b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
// c) o imposto equivale a 3% do salário bruto.
// d) o salário a receber equivale ao salário bruto menos o imposto.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMin, salariobruto, horaTrabalho, imposto, salarioReceber;
    int horasTrabalhada;

    scanf("%f %d", &salarioMin, &horasTrabalhada);

    horaTrabalho = salarioMin / 2;

    salariobruto = horasTrabalhada * horaTrabalho;

    imposto = salariobruto * 0.03f;

    salarioReceber = salariobruto - imposto;

    printf("Salario a receber: %.2f",salarioReceber);

    return 0;
} // end main