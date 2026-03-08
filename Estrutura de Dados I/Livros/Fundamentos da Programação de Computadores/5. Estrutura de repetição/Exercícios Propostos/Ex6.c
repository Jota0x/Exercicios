/*
Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■■ o valor total das compras à vista;
■■ o valor total das compras a prazo;
■■ o valor total das compras efetuadas; e
■■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
*/
#include <stdio.h>

int main()
{
    float valor, valorTotal = 0, valorPrazo = 0, valorVista = 0, total3Parcela;
    char codigo;

    // le preco e codigo
    scanf(" %c%d", &codigo, &valor);

    // loop principal
    for (int i = 0; i < 14; i++)
    {
        valorTotal += valor;

        // trata valor
        if (codigo == 'V')
        {
            valorVista += valor;
        } // end if
        else
        {
            valorPrazo += valor;
            total3Parcela += valor / 3; // acha o valor de cada parcela
        } // end else

        // proximas leituras
        scanf(" %c%d", &codigo, &valor);
    } // end for

    // imprime informações
    printf("Valor total: %f", valorTotal);
    printf("\n valor total prazo: %f", valorPrazo);
    printf("\n valor total a vista: %f", valorVista);
    printf("\nValor total primeira prestacao: %f", total3Parcela);

    return 0;
} // end main