// Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto
// poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher
// pelo menos um dos requisitos a seguir:
// VENDA MÉDIA MENSAL PREço ATuAL % DE AuMENTo % DE DIMINuIção
//< 500 < R$ 30,00 10 –
//>= 500 e < 1.200 >= R$ 30,00 e < R$ 80,00 15 –
//>= 1.200 >= R$ 80,00 – 20
// Faça um programa que receba o preço atual e a venda média mensal do produto, calcule e mostre o
// novo preço.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoAtual, novoPreco, aumento, diminuicao;
    int vendaMensal;

    scanf("%f%d", &precoAtual, &vendaMensal);

    // analise de venda media e do preco atual
    if (vendaMensal < 500 && precoAtual < 30)
    {
        aumento = precoAtual * 0.10f;
        diminuicao = 0;
    } // end if
    else if (vendaMensal >= 500 && vendaMensal < 1200 && precoAtual >= 30 && precoAtual < 80)
    {
        aumento = precoAtual * 0.15f;
        diminuicao = 0;
    } // end else if
    else if (vendaMensal >= 1200 && precoAtual >= 80)
    {
        aumento = 0;
        diminuicao = precoAtual * 0.20f;
    } // end else if
    else

        aumento = 0;
        diminuicao = 0;

    novoPreco = precoAtual + aumento - diminuicao;

    printf("%f", novoPreco);

    return 0;
} // end mian