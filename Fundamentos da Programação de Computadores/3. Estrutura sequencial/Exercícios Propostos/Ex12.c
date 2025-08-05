// Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
// e mostre a quantidade de salários mínimos que esse funcionário ganha
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMin, salarioRecebido, qtsSalariomin = 0;

    scanf("%f%f", &salarioMin, &salarioRecebido);

    qtsSalariomin = salarioRecebido / salarioMin;

    printf("%f", qtsSalariomin);

    return 0;
}// end main