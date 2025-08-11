// Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
// e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento, novoSalario;
    int codigo;

    scanf("%d%f", &codigo, &salario);

    if (codigo == 1)
    {
        aumento = salario * 0.50f;
    } // end if
    else if (codigo == 2)
    {
        aumento = salario * 0.35f;

    } // end else if
    else if (codigo == 3)
    {
        aumento = salario * 0.20f;

    } // end else if
    else if (codigo == 4)
    {
        aumento = salario * 0.10f;

    } // end else if
    else if (codigo == 5)
    {
        aumento = 0;

    } // end else if
    else
        printf("Codigo nao existe ");

    novoSalario = salario + aumento;

    printf("Novo Salario: %f", novoSalario);

    return 0;
} // end main
