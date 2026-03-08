/*
Faça um programa que receba:
■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15  5;
■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
O programa deverá calcular e mostrar:
■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);
■■ a média da classe.
*/
#include <stdio.h>

int main()
{
    float notas[15][5];
    char nomes[15][50];

    // armazena notas
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++)
            scanf("%f", &notas[i][j]);

    // armazena nomes
    for (int i = 0; i < 15; i++)
        scanf("%s", nomes[i]);

    float mediaTotal = 0;

    // calculo meidia sala
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++)
            mediaTotal += notas[i][j];

    mediaTotal = mediaTotal / 75;

    printf("\nMeidia total: %.2f\n", mediaTotal);

    for (int i = 0; i < 15; i++)
    {
        float media = 0;
        char *situacao;

        for (int j = 0; j < 5; j++)
        {
            media += notas[i][j];
        }

        media = media / 5;

        if (media >= 6)
            situacao = "Aprovado";
        else if (media >= 4)
            situacao = "Exame";
        else
            situacao = "Reprovado";

        printf("Nome: %s Media: %.2f Situacao: %s\n", nomes[i], media, situacao);
    }

    return 0;
} // end main