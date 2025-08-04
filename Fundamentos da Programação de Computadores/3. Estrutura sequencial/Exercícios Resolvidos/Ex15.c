// O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
// distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fá-
// brica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
// a) o valor correspondente ao lucro do distribuidor;
// b) o valor correspondente aos impostos;
// c) o preço final do veículo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, percentLucro, percentImposto, lucroEmpresa, imposto, precoFinal;

    // le preço percentual de lucro e percentual de imposto sobre o carro
    scanf("%f %f %f", &preco, &percentLucro, &percentImposto);

    imposto = preco * (percentImposto / 100);

    lucroEmpresa = lucroEmpresa = preco * (percentLucro / 100.0);

    precoFinal = preco + lucroEmpresa + imposto;

    printf("Lucro: %.2f imposto: %.2f preco final: %.2f", lucroEmpresa, imposto, precoFinal);

    return 0;

} // end main