// Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
// mensagem de aprovado ou reprovado, considerando para aprovação média 7.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media = 0;

    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 7)
    {
        printf("Aprovado! media final: %f",media);
    }
    else 
        printf("Reprvado! media final: %.2f",media);


} // end main