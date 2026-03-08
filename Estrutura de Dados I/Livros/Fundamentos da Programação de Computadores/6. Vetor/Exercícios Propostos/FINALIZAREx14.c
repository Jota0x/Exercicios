/*
Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas:
ALUNO 1a PROVA 2a PROVA MÉDIA SITUAÇÃO
Carlos 8,0 9,0 8,5 Aprovado
Pedro 4,0 5,0 4,5 Reprovado
■■ média da classe = ?
■■ percentual de alunos aprovados = ?%
■■ percentual de alunos de exame = ?%
■■ percentual de alunos reprovados = ?%
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nome[8];
    float nota1[8], nota2[8];
    float media = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Nome : %s Nota 1: %f Nota 2: %f", nome[i], nota1[i], nota2[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        media += (nota1[i] + nota2[i]);
    }

    return 0;
} // end main
