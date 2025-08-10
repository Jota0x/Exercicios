// Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
// mostre o valor do aumento e o novo salário.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento, novoSalario;

    scanf("%f",&salario);

    if(salario <=300)
    {
        aumento = salario * 0.15f;

        novoSalario = salario + aumento;

        printf("Aumento: %f Novo Salario: %f ",aumento,novoSalario);

    }
    
    else if(salario > 300 && salario <= 600)
    {
        aumento = salario * 0.10f;

        novoSalario = salario + aumento;

        printf("Aumento: %f Novo Salario: %f ",aumento,novoSalario);

    }
    
    else if(salario > 600 && salario <= 900)
    {
        aumento = salario * 0.05f;

        novoSalario = salario + aumento;

        printf("Aumento: %f Novo Salario: %f ",aumento,novoSalario);

    }
    else    

         aumento = 0;

        novoSalario = salario + aumento;

        printf("Aumento: %f Novo Salario: %f ",aumento,novoSalario);




    return 0;
} // end main