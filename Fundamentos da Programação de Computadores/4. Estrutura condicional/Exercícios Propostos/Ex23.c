//Faça um programa que receba:
//■■ o código do produto comprado; e
//■■ a quantidade comprada do produto.
//calcule e mostre:
//■■ o preço unitário do produto comprado, seguindo a Tabela I;
//■■ o preço total da nota;
//■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
//■■ o preço final da nota depois do desconto.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo,quantidade;
    float valorUnitario,precoNota,desconto,precoFinal;

    // leitura codigo e quantidade
    scanf("%d%d",&codigo,&quantidade);

    //analise codigo
    if(codigo >= 1 && codigo <=10)
    {
        valorUnitario = 10;
    }// end if   
    else if(codigo >= 11 && codigo <= 20)
    {
        valorUnitario = 20;
    }// end else if 
    else if(codigo >= 21 && codigo <=30)
    {
        valorUnitario = 30;
    }// end else if 
    else
        valorUnitario = 30; //considerando que o codigo seja digitado dentro do limeite exigido

    precoNota = quantidade * valorUnitario;

    //analise do desconto
    if(precoNota <= 250)
    {
        desconto = precoNota * 0.05f;
    }// end if 
    else if(precoNota > 250 && precoNota <= 500)
    {
        desconto = precoNota * 0.10f;
    }// end else if 
    else
        desconto = precoNota * 0.15f;

    precoFinal = precoNota - desconto;

    printf("Preco unitario: %f",valorUnitario);
    printf("Preco total da nota(sem desconto): %f",precoNota);
    printf("Valor do desconto: %f",desconto);
    printf("Preco final(com o desconto): %f ",precoFinal);



    return 0;
}// end main