/*
Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■■ o preço final para compra à vista tem desconto de 20%;
■■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■■ os percentuais de acréscimo encontram-se na tabela a seguir
*/
#include <stdio.h>

int main()
{
    float precoFinal = 0, percentual = 3, preco;
    int parcela = 6;

    // le preco
    scanf("%f", &preco);

    precoFinal = preco;

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        // imprime preco
        printf("\nPreco: %.2f Parcela: %d Percentual: %.2f Preco Final: %.2f ", preco, parcela, percentual, precoFinal);

        percentual += 3;

        parcela += 6;

        precoFinal = preco + (preco * (percentual / 100));

    } // end for

    return 0;
} // end main