// O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
// buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
// seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custoFabrica, distribuidor = 0, imposto, precoFinal;

    scanf("%f", &custoFabrica);

    if (custoFabrica <= 12000)
    {
        distribuidor = custoFabrica * 0.05f;
        imposto = 0;
        precoFinal = custoFabrica + imposto + distribuidor;
        printf("%f", precoFinal);
    }
    else if (custoFabrica > 12000 && custoFabrica <= 25000)
    {
        distribuidor = custoFabrica * 0.10f;
        imposto = custoFabrica * 0.15f;
        precoFinal = custoFabrica + imposto + distribuidor;
        printf("%f", precoFinal);
    }
    else

        distribuidor = custoFabrica * 0.15f;
        imposto = custoFabrica * 0.20f;
        precoFinal = custoFabrica + imposto + distribuidor;
        printf("%f", precoFinal);

    return 0;
} // end main