// Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
// ■■ a média aritmética das duas notas de cada aluno; e
// ■■ a mensagem que está na tabela a seguir:
// ■ o total de alunos aprovados;
// s■■ o total de alunos de exame;
// ■■ o total de alunos reprovados;
// ■■ a média da classe.
#include <stdio.h>

int main()
{
    int nota1, nota2, aprovado = 0, exame = 0, reprovado = 0;
    float mediaAluno, soma, mediaTotal;

    // loop principal
    for (int i = 0; i < 6; i++)
    {
        scanf("%d%d", &nota1, &nota2);

        soma += (nota1 + nota2);

        mediaAluno = (nota1 + nota2) / 2;

        printf(" Media : %f ", mediaAluno);
        if (mediaAluno <= 3)
        {
            printf(" Reprovado");
        } // end if
        else if (mediaAluno > 3 && mediaAluno <= 7)
        {
            printf(" Exame");
        } // end else if
        else
            printf(" Aprovado");
    } // end for

    mediaTotal = soma / 12;

    printf("\nMedia total da classe: %f");

    return 0;
} // end main