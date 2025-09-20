/*
Elabore uma função que receba três notas de um aluno como parâmetros e uma
letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do
aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.
*/
#include <stdio.h>

float media(float x, float y, float z, char letra);

int main()
{
    float nota1, nota2, nota3;
    char letra;

    scanf(" %c%f%f%f", &letra, &nota1, &nota2, &nota3);

    printf("%.2f", media(nota1, nota2, nota3, letra));

    return 0;
} // end main

float media(float x, float y, float z, char letra)
{
    float media;

    if (letra == 'A')
    {
        media = (x + y + z) / 3;
    }
    else if (letra == 'P')
    {
        media = ((x * 5) + (x * 3) + (x * 2)) / 10;
    }
    else
        printf("opcao invalida");

    return media;

} // end media
