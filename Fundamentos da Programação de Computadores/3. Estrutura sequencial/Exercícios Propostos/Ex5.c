//Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
//que este sofreu um desconto de 10%
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco,novoPreco;

    scanf("%f",&preco);

    novoPreco = preco + (preco * 0.10f);

    printf("%.2f",novoPreco);

    return 0;
}// end main