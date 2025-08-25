// Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if (idade > 18)
        printf("Maior de idade");
    else
        printf("Menor de idade");

    return 0;
} // end main