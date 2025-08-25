//Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
//sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,salarioReceber = 0;

    scanf("%f",&salario);

    salarioReceber = (salario + 50) - (salario * 0.10f);

    printf("%.2f",salarioReceber);

    return 0;

}// end main