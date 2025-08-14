// Faça um programa que leia o salário de um trabalhador e o valor da prestação de
// um empréstimo. Se a prestação:
// For maior que 20% do salário, imprima: “Empréstimo não concedido.”•
// Caso contrário, imprima: “Empréstimo concedido.”
#include <stdio.h>
#include <stdio.h>

int main()
{
    float salario, prestacao;

    scanf("%f%f", &salario, &prestacao);

    if (prestacao > (salario + salario * 0.20f))
    {
        printf("Emprestimo nao concecbido");
    } // end if
    else
        printf("Emprestimo concebido");

    return 0;
} // end main