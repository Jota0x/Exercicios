/*
Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■■ o lucro de cada ação comercializada;
■■ a quantidade de ações com lucro superior a R$ 1.000,00;
■■ a quantidade de ações com lucro inferior a R$ 200,00;
■■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’
*/
#include <stdio.h>

int main()
{
    char acao;
    float compra, venda, lucro, lucro1000 = 0, lucro200 = 0, lucroTotal;

    scanf(" %c%f%f", &acao, &compra, &venda);

    // loop principal
    while (acao != 'F')
    {

        lucro = venda - compra;

        lucroTotal += lucro;

        // trata lucro
        if (lucro > 1000)
        {
            lucro1000++;
        }
        if (lucro > lucro200)
        {
            lucro200++;
        }

        printf("\n Lucro da acao: %f", lucro);

        scanf(" %c%f%f", &acao, &compra, &venda);

    } // end while

    printf("\nLucro Total: %f", lucroTotal);
    printf("\nMais de 200: %f mais de 1000: %f", lucro200, lucro1000);

    return 0;
} // end main