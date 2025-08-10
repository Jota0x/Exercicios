// Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
// o novo salário
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario, aumento;

    scanf("%f", &salario);

    if (salario <= 300)
    {
        aumento = salario * 0.50f;

        novoSalario = salario + aumento;

        printf("%f", salario);
    }
    else if (salario > 300 && salario <= 500)
    {
        aumento = salario * 0.40f;

        novoSalario = salario + aumento;

        printf("%f", salario);
    }

    else if (salario > 500 && salario <= 700)
    {
        aumento = salario * 0.30f;

        novoSalario = salario + aumento;

        printf("%f", salario);
    }

    else if (salario > 700 && salario <= 800)
    {
        aumento = salario * 0.20f;

        novoSalario = salario + aumento;

        printf("%f", salario);
    }
    if (salario > 800 && salario <= 1000)
    {
        aumento = salario * 0.10f;

        novoSalario = salario + aumento;

        printf("%f", salario);
    }
    else
        aumento = salario * 0.05f;

    novoSalario = salario + aumento;

    printf("%f", salario);

    return 0;
} // end main