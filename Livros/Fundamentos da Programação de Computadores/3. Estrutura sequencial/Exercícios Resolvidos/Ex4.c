// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
// que este sofreu um aumento de 25%
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario = 0;

    scanf("%f", &salario);

    novoSalario = salario + (salario * 0.25f);

    printf("%.2f", novoSalario);

    return 0;

} // end main