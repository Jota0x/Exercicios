// Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num,multiplicacao;

    scanf("%d",&Num);

    for(int i = 0; i <= 10;i++)
    {
        multiplicacao =  i * Num;

        printf(" %d ",multiplicacao);

    }

    return 0;
}// end main