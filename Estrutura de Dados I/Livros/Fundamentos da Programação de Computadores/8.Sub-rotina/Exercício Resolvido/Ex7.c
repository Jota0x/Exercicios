/*
Elabore um programa contendo uma sub-rotina que receba as três notas de um aluno como parâme-
tros e uma letra. Se a letra for A, a sub-rotina deverá calcular a média aritmética das notas do aluno; se
for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. A média calculada deverá ser devolvida
ao programa principal para, então, ser mostrada.
*/
#include <stdio.h>

float media(float x, float y, float z, char media);

int main()
{
    float a, b, c;
    char letra;

    scanf("%f%f%f %c", &a, &b, &c, &media);

    printf("%.2f", media(a, b, c, letra));

    return 0;

} // end main

float media(float x, float y, float z, char media)
{
    float media = 0;

    if (media == 'A')
    {
        media = (x + y + z) / 3;
    }
    else if (media == 'P')
    {
        media = ((x * 5) + (y * 3) + (z * 2)) / 10;
    }
    else
        media = -1; // erro

    return media;
}
