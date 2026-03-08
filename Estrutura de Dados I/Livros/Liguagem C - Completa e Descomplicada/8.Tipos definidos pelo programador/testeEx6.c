/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;

} Aluno;

Aluno aluno[5];

int main()
{
    for (int i = 0; i < 5; i++)
        scanf("%d%s%f%f%f", &aluno[i].matricula, aluno[i].nome, aluno[i].nota1, &aluno[i].nota2, &aluno[i].nota3);

    float maiorMedia = 0;
    float media = 0;
    int aux;

    for (int i = 0; i < 5; i++)
    {
        media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;

        if (media > maiorMedia)
        {
            maiorMedia = media;
            aux = i;
        }
    }

    printf("Maior media: %.2f/n", maiorMedia);
    printf("Nome: %s\n", aluno[aux].nome);
    printf("Nota 1: %.2f\n", aluno[aux].nota1);
    printf("Nota 2: %.2f\n", aluno[aux].nota2);
    printf("Nota 3: %.2f\n", aluno[aux].nota3);

    return 0;
} // end main