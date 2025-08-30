// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
// o valor do aumento e o novo salário
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, percentAumento, novoSalario = 0;

    scanf("%f %f", &salario, &percentAumento);

    novoSalario = salario + (salario * (percentAumento / 100));

    printf("%.2f", novoSalario);

    return 0;

} // end main
