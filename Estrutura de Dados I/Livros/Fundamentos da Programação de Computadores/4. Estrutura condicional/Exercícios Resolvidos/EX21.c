// Faça um programa que receba:
// ■■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do
// estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
// ■■ o peso da carga do caminhão em toneladas;
// ■■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro
// entre 10 e 40.
// calcule e mostre:
// ■■ o peso da carga do caminhão convertido em quilos;
// ■■ o preço da carga do caminhão;
// ■■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e de-
// pende do estado de origem;
// ■■ o valor total transportado pelo caminhão, preço da carga mais imposto.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, codigoCarga;
    float pesoCarga, preco, imposto,pesokilos,precoTotal;

    scanf("%d%f%d", &codigo, &pesoCarga, &codigoCarga);

    // verificação do codigo
    if (codigo < 1 || codigo > 5)
    {
        printf("Erro! codigo incorreto");
        return 1;
    } // end if

    pesokilos = pesoCarga * 1000;

    // analise do preco
    if (codigoCarga >= 10 && codigoCarga <= 20)
    {
        preco = 100 * pesokilos;

    } // end if
    else if (codigoCarga >= 21 && codigoCarga <= 30)
    {
        preco = 250 * pesokilos;
    } // end else if
    else
        preco = 340 * pesokilos;

    // analise codigo
    if (codigo == 1)
    {
        imposto = preco * 0.35f;
    } // end if
    else if (codigo == 2)
    {
        imposto = preco * 0.25f;
    } // end else if
    else if (codigo == 3)
    {
        imposto = preco * 0.15f;
    } // end else if
    else if (codigo == 4)
    {
        imposto = preco * 0.05f;
    } // end else if
    else    
        imposto = 0;

    precoTotal = preco + imposto;

    printf("Peso em Kg: %f Preco: %f Imposto: %f Preco Total: %f",pesokilos,preco,imposto,precoTotal);

    return 0;
} // end main
