// Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, re-
// ceba os dados necessários para executar a operação e mostre o resultado. verifique a possibilidade de
// opção inválida e não se preocupe com restrições, como salário negativo.
// Menu de opções:
// 1. Imposto
// 2. Novo salário
// 3. classificação
// Digite a opção desejada.
// Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
// a seguir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float salario, imposto, novoSalario, aumento;

    // menu
    do
    {
        printf("\n--- Menu de opcoes --- \n");
        printf("\n 1 - imposto");
        printf("\n 2 - Novo Salario");
        printf("\n 3 - Classificao");
        printf("\n 0 - Sair do programa");
        printf("\n Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            scanf("%f", &salario);

            if (salario < 500)
            {
                imposto = salario * 0.05f;
            }
            else if (salario >= 500 && salario <= 850)
            {
                imposto = salario * 0.10f;
            }
            else
                imposto = salario * 0.15f;

            printf("%f", imposto);
            break;

        case 2:
            scanf("%f", salario);

            if (salario > 1500)
            {
                aumento = 25;
            }
            else if (salario >= 750 && salario <= 1500)
            {
                aumento = 50;
            }
            else if (salario >= 450 && salario <= 750)
            {
                aumento = 75;
            }
            else
                aumento = 100;

            novoSalario = salario + aumento;

            printf("%f", novoSalario);
            break;

        case 3:
            scanf("%f", &salario);

            if (salario <= 750)
            {
                printf("Mal remunerado");
            }
            else
                printf("Bem remunerado");
            break;

        default:
            printf("Opcao invalida!");
            break;
        }

    } while (opcao != 0);

} // end main