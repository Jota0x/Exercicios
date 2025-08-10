// Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-
// guir, o novo preço e a classificação.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, novoPreco, classificacao;

    scanf("%f", &preco);

    if (preco <= 50)
    {
        novoPreco = (preco + (preco * 0.05f));
    }
    else if (preco > 50 && preco <= 100)
    {
        novoPreco = (preco + (preco * 0.10f));
    }
    else
        novoPreco = (preco + (preco * 0.15f));

    if (novoPreco <= 80)
    {
        print("Barato");
    }
    if (novoPreco > 80 && novoPreco <= 120)
    {
        print("Normal");
    }
    if (novoPreco > 120 && novoPreco <= 200)
    {
        print("Caro");
    }
    else
        print("Muito caro");

    return 0;
} // end main