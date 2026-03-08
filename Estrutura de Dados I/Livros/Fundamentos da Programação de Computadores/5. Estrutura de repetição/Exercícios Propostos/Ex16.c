/*
Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize di-
gitando idade igual a zero.
*/
#include <stdio.h>

int main()
{
    int idade, aux = 0;
    float media = 0;

    scanf("%d", idade);

    // loop principal
    while (idade != 0)
    {
        media += idade;
        aux++;

        scanf("%d", idade);
    } // end while

    // imprime media
    printf("%f", media / aux);

    return 0;
} // end main