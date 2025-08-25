// Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
// constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
// tirar para serem aprovados, considerando que a média exigida é 6,0.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, notaMedia, media = 0;

    scanf("%f%f%f",&nota1,&nota2,&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media < 3)
    {
        notaMedia = 6 - media;
        printf("Reprovado! , nota para media: %f ", notaMedia);
    }
    else if (media < 7)
    {
        printf("Exame!");
    }
    else if (media <= 10)
    {
        printf("Aprovado!");
    }

    return 0;

} // end main