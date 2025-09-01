#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoUnidade, custoEstocagem, imposto, menorPreco = 0, maiorPreco = 0, precoFinal, totalImposto = 0;
    char refrigeracao, categoria;
    int barato = 0, normal = 0, caro = 0;

    // loop principal
    for (int i = 0; i < 12; i++)
    {
        // le preço Unitário, refrigeração e categoria
        scanf("%f %c %c", &precoUnidade, &refrigeracao, &categoria);

        // condicional de maior e menor preço
        if (precoUnidade > maiorPreco)
        {
            maiorPreco = precoUnidade;
        } // end if
        if (precoUnidade < menorPreco)
        {
            menorPreco = precoUnidade;
        } // end if

        // condicinal de custo de estocagem
        if (precoUnidade <= 20)
        {
            if (categoria == 'A')
            {
                custoEstocagem = 2;
            } // end if
            else if (categoria == 'L')
            {
                custoEstocagem = 3;
            } // end else if
            else
                custoEstocagem = 4;
        } // end if
        else if (precoUnidade > 20 && precoUnidade <= 50)
        {
            if (refrigeracao == 'S')
            {
                custoEstocagem = 6;
            } // end if
            else
                custoEstocagem = 0;
        } // end else if
        else
        {
            if (refrigeracao == 'S')
            {
                if (categoria == 'A')
                {
                    custoEstocagem = 5;
                } // end if
                else if (categoria == 'L')
                {
                    custoEstocagem = 2;
                } // end else
                else
                    custoEstocagem = 4;
            } // end if
            else if (categoria == 'A' || categoria == 'V')
            {
                custoEstocagem = 0;
            } // end if
            else
                custoEstocagem = 1;
        } // end else


        // condicinal de imposto
        if (categoria == 'A' && refrigeracao == 'S')
        {
            imposto = precoUnidade * 0.04f;
        } // end if
        else
        {
            imposto = precoUnidade * 0.02f;
        }

        // calcula o imposto total
        totalImposto += imposto;


        // calculo preço Final
        precoFinal = precoUnidade + custoEstocagem + imposto;

        if (precoFinal <= 20)
        {
            barato++;

        } // end if
        else if (precoFinal > 20 && precoFinal <= 100)
        {
            normal++;
        } // end else if
        else
            caro++;

    } // end for

    // imprime informações
    printf("Maior preco: %.2f", maiorPreco);
    printf("\nMenor preco: %.2f", menorPreco);
    printf("\nTotal imposto: %.2f", totalImposto);
    printf("\nProdutos baratos: %d normal: %d caro: %d", barato, normal, caro);

    return 0;
} // end main