// Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
// na tabela a seguir:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media = 0;

    scanf("%f%f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 3)
    {
        printf("Reprovado!");
    }
    else if (media >= 3 && media < 7)
    {
        printf("Em exame");
    }
    else
        printf("Aprovado!");

    return 0;

} // end main