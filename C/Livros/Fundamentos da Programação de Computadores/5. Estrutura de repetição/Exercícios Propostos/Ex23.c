/*
Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibi-
lidade de opção inválida e não se preocupe com as restrições como salário inválido.
Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a se-
guir:
SALáRIOS pERCENTAgEM dE AUMENTO
até R$ 210,00 15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
acima de R$ 600,00 5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa.
*/
#include <stdio.h>

int main()
{
    int opcao, meses;
    float salario;

    scanf("%d", &opcao);

    switch (opcao)
    {
    case1:
        scanf("%f", &salario);

        if (salario <= 210)
        {
            salario = salario + (salario * 0.15f);
        }
        else if (salario >= 210 && salario <= 600)
        {
            salario = salario + (salario * 0.10f);
        }
        else
            salario = salario + (salario * 0.05f);

        printf("%f", salario);

        break;

    case 2:
        scanf("%f", &salario);

        salario = salario / 3;

        printf("Ferias: %.2f", salario);
        break;

    case 3:
        scanf("%f%d", &salario, &meses);

        salario = (salario * meses) / 12;

        printf("decimo terceiro: %.2f", salario);
        break;

    default:
        printf("Opcoa invalida");
        break;
    }

    return 0;
} // end main