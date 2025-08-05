// Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
// que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
// salário final.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, vendas, comissao, salariofinal = 0;

    scanf("%f%f", &salario, &vendas);

    comissao = vendas * 0.04f;

    salariofinal = salario + comissao;

    printf("Comissao: %.2f Salario Final: %.2f", comissao, salariofinal);

    return 0;

} // end main