/*
Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■■ para valores negativos, deve ser enviada uma mensagem;
■■ os valores negativos ou iguais a zero não entrarão nos cálculos.
*/
#include <stdio.h>

int main()
{
    int n, maior, menor;

    scanf("%d", &n);
    maior = n;
    menor = n;

    while (n != 0)
    {
        if (n < 0)
        {
            printf("Valor invalido");
        }
        else if (n > 0)
        {
            if (n > maior)
                maior = n;
            else
                menor = n;
        }
    }

    return 0;

} // end main