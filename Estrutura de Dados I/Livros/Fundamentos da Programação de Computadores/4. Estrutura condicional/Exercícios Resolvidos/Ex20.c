// Faça um programa que receba:
// ■■ O código de um produto comprado, supondo que a digitação do código do produto seja sempre
// válida, isto é, um número inteiro entre 1 e 10.
// ■■ O peso do produto em quilos.
// ■■ O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um nú-
// mero inteiro entre 1 e 3.
// calcule e mostre:
// ■■ o peso do produto convertido em gramas;
// ■■ o preço total do produto comprado;
// ■■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende
// do país de origem;
// ■■ o valor total, preço total do produto mais imposto.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, codigoPais;
    float peso, pesoGramas, precoTotal, imposto, valorTotal, valorGrama;

    scanf("%d", &codigo);

    // verifica a validade do codigo
    if (codigo < 1 || codigo > 10)
    {
        printf("Erro no codigo!");
        return 1;
    } // end if

    scanf("%f%d", &peso, &codigoPais);

    // verifica a validade do codigo do pais
    if (codigoPais < 1 || codigoPais > 3)
    {
        printf("Erro no codigo!");
        return 1;
    } // end if

    pesoGramas = peso * 1000;

    // preco por grama
    if (codigo >= 1 && codigo <= 4)
    {
        valorGrama = 10;
    } // end if
    else if (codigo >= 5 && codigo <= 7)
    {
        valorGrama = 25;
    } // end else if
    else
        valorGrama = 35;

    precoTotal = pesoGramas * valorGrama;

    // analise do imposto
    if (codigoPais == 1)
    {
        imposto = 0;
    } // end if
    else if (codigoPais == 2)
    {
        imposto = precoTotal * 0.15f;
    } // end if
    else
        imposto = precoTotal * 0.25f;

    valorTotal = precoTotal + imposto;

    printf("Peso em gramas: %.2f Preco total: %.2f Imposto: %.2f Valor total(+imposto): %f", pesoGramas, precoTotal, imposto, valorTotal);

    return 0;
} // end main