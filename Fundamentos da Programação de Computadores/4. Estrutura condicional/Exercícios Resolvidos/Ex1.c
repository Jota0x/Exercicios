// A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um traba-
// lho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
// Faça um programa que receba as três notas, calcule e mostre a média ponderada
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mediaPonderada, nota1, nota2, nota3;

    scanf("%f%f%f", &nota1, &nota2, &nota3);

    mediaPonderada = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("Media: %f\n",mediaPonderada);

    if (mediaPonderada >= 8)
    {
        printf("Conceito: A");
    }
    else if (mediaPonderada >= 7)
    {
        printf("Conceito: B");
    }
    else if (mediaPonderada >= 6)
    {
        printf("Conceito: C");
    }
    else if (mediaPonderada >= 5)
    {
        printf("Conceito: D");
    }
    else
        printf("Conceito: E");
    return 0;
} // end main