/*
Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1o aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2o aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nome[8];
    float nota[8];

    // loop pra leitura
    for (int i = 0; i < 8; i++)
    {
        nome[i] = (char *)malloc(50 * sizeof(char));
        scanf("%s%f", nome[i], &nota[i]);
    } // end for

    printf(" --- Relatorio de notas --- ");
    for (int i = 0; i < 8; i++)
    {
        printf("\n%s %.2f", nome[i], nota[i]);
    }

    for (int i = 0; i < 8; i++)
        free(nome[i]);

    return 0;
} // end main