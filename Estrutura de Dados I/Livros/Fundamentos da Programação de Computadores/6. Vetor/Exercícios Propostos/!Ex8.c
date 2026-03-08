/*
Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
■■ o nome do aluno com maior média (desconsiderar empates);
■■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa ti-
rar na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.
*/
#include <stdio.h>

int main()
{
    char *nomes[10], maiorMedia[50]; // 10 nomes com 50 caracteres no máximo
    float mediaFinal[10], media = 0;

    for (int i = 0; i < 10; i++)
        scanf(" %s%f", nomes[i], mediaFinal[i]);

    for (int i = 0; i < 10; i++)
    {
        // trata media
        if (mediaFinal[i] > media)
            maiorMedia[50] == nomes[i];

        if (mediaFinal[i] < 7)
        {
            printf("Não aprovado! Pontos faltantes: %.2f", (5 - mediaFinal[i]));
        }
    }

    printf("Maior media: %s", maiorMedia[50]);
    return 0;
} // end main