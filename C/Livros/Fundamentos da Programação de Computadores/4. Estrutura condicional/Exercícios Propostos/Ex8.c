// Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
// encontra-se na tabela a seguir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario;

    scanf("%f", &salario);

    if (salario <= 300)
    {
        novoSalario = salario + (salario * 0.35f);
        printf("%f", novoSalario);
    }
    else
        novoSalario = salario + (salario * 0.15f);
        printf("%f", novoSalario);

    return 0;
} // end main