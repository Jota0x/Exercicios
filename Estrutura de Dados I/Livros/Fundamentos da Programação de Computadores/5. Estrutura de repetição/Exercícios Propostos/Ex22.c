/*
Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero.
*/
#include <stdio.h>

int main()
{
    int idade;
    float altura, mediaAltura, aux = 0;

    // le idade e altura
    scanf("%d%f", &idade, &altura);

    // loop principal
    while (idade > 0)
    {
        if (idade > 50)
        {
            mediaAltura += altura;
            aux++;
        }

        scanf("%d%f", &idade, &altura);
    } // end while

    printf("Media:%.2f", mediaAltura / aux);

    return 0;
} // end main