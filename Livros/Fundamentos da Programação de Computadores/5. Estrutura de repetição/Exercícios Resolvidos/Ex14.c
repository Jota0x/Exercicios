// Faça um programa que receba o valor de uma dívida e mostre uma tabela com os seguintes dados:
// valor da dívida, valor dos juros, quantidade de parcelas e valor da parcela.
#include <stdio.h>

int main()
{
    float divida, juros, valorParcela, total, valorJuros;
    int qtsParcela;

    // le valor da dívida
    scanf("%f", &divida);

    juros = 0;

    qtsParcela = 1;

    valorParcela = divida;

    // imprime primeiro valor
    printf("Valor da divida: %.2f | valor juros: %.2f | quantidade parcela: %d | valor parcela: %.2f", divida, juros, qtsParcela, valorParcela);

    qtsParcela += 2;

    juros = 10;

    // loop principal
    for (int i = 1; i <= 4; i++)
    {

        valorJuros = divida * (juros / 100);

        total = divida + valorJuros;

        valorParcela = total / qtsParcela;

        // imprime valores restantes
        printf("\nValor da divida: %.2f | valor juros: %.2f | quantidade parcela: %d | valor parcela: %.2f", total, valorJuros, qtsParcela, valorParcela);

        juros += 5;

        qtsParcela += 3;

    } // end for

    return 0;
} // end main