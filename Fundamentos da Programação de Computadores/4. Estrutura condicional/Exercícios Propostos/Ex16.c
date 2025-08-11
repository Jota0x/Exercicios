// Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
// receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, codigo, desconto, novoPreco;

    scanf("%f%f", &preco, &codigo);

    if (preco <= 30)
    {
        desconto = 0;

        novoPreco = preco - desconto;

        printf("Desconto: %f Novo Preco: %f");

    } // end if
    else if (preco > 30 && preco <= 100)
    {

        desconto = preco * 0.10f;

        novoPreco = preco - desconto;

        printf("Desconto: %f Novo Preco: %f");

    } // end else if
    else 

        desconto = preco * 0.15f;

        novoPreco = preco - desconto;

        printf("Desconto: %f Novo Preco: %f");


    return 0;
} // end main