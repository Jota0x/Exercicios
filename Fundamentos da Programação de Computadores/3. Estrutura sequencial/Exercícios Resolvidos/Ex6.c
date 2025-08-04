// Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
// sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam-
// bém sobre o salário base.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salarioReceber;

    scanf("%f",&salario);

    salarioReceber = salario + (salario * 0.05f) - (salario * 0.07f); 

    printf("%.2f",salarioReceber);

    return 0;

}// end main