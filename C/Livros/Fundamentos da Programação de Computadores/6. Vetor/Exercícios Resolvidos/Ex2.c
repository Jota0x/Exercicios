/*
Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de objetos. O
vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total de suas vendas.
O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de
cada peça deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços
e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez).
Depois, determine e mostre:
■■ um relatório contendo: quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
deverão ser mostrados o valor geral das vendas e o valor da comissão que será paga ao vendedor; e
■■ o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates)
*/
#include <stdio.h>

int main()
{
    float preco[10];
    int qtsVendida[10];
    float valorGeral = 0;
    float maiorValor = 0;
    int posicao;

    // le preco e quantidade vendida
    for (int i = 0; i < 10; i++)
    {
        scanf("%f%d", &preco[i], &qtsVendida[i]);

        valorGeral += (preco[i] * qtsVendida[i]);

        if (qtsVendida[i] > maiorValor)
        {
            maiorValor = preco[i];
            posicao = i;
        } // end if

    } // end for

    // imprime relatorio
    for (int i = 0; i < 10; i++)
    {

        printf("Quantidade vendida: %d Valor: %.2f Valor Total %.2f\n", qtsVendida[i], preco[i], (qtsVendida[i] * preco[i]));

    } // end for

    printf("Valor geral vendas: %.2f Comissao: %.2f\n", valorGeral, (0.05f * valorGeral));
    printf("Valor objeto mais vendido: %.2f Posicao: %d\n", maiorValor, posicao);

    return 0;
} // end main