/*Faça um programa que receba os dados a seguir de vários produtos: preço unitário, país de origem
(1 – Estados Unidos; 2 — México; e 3 — outros), meio de transporte (T — terrestre; F — fluvial; e A
— aéreo), carga perigosa (S — sim; N — não), finalize a entrada de dados com um preço inválido, ou
seja, menor ou igual a zero. O programa deve calcular e mostrar os itens a seguir.
PASCAL
C/C++
J A V A
Capítulo 5 Estrutura de repetição | 145
■■ O valor do imposto, usando a tabela a seguir.
pREçO UNITáRIO pERCENTUAL dE IMpOSTO
SObRE O pREçO UNITáRIO
até R$ 100,00 5%
maior que R$ 100,00 10%
■■ O valor do transporte usando a tabela a seguir.
CARgA pERIgOSA pAíS dE ORIgEM VALOR dO TRANSpORTE
S
1 R$ 50,00
2 R$ 21,00
3 R$ 24,00
N
1 R$ 12,00
2 R$ 21,00
3 R$ 60,00
■■ O valor do seguro, usando a regra a seguir.
Os produtos que vêm do México e os produtos que utilizam transporte aéreo pagam metade do valor
do seu preço unitário como seguro.
■■ O preço final, ou seja, preço unitário mais imposto mais valor do transporte mais valor do seguro.
■■ O total dos impostos.
*/
#include <stdio.h>

int main()
{
    float precoUnidade, imposto, valorTransporte, valorSeguro, precoFinal, totalImposto = 0;
    char paisOrigem, meioTransporte, cargaPerigosa;

    // le preco unidade, pais, meio de transporte e carga perigosa
    scanf("%f %c %c %c", precoUnidade, paisOrigem, meioTransporte, cargaPerigosa);

    // loop principal
    while (precoUnidade <= 0)
    {
        // trata impostp
        if (precoUnidade <= 100)
        {
            imposto = precoUnidade * 0.05f;
        } // end if
        else
        {
            imposto = precoUnidade * 0.10f;
        } // end else

        // calcula o total de imposto
        totalImposto += imposto;

        // trata valor do transporte
        if (cargaPerigosa == 'S')
        {
            if (paisOrigem == 1)
            {
                valorTransporte = 50;
            }
            else if (paisOrigem == 2)
            {
                valorTransporte = 21;
            } // else if
            else
                valorTransporte = 24;
        } // end if
        else if (paisOrigem == 1)
        {
            valorTransporte = 12;
        } // end else if
        else if (paisOrigem == 2)
        {
            valorTransporte = 21;
        } // end else if
        else
        {
            valorTransporte = 60;
        } // end else

        // trata valor do Seguro
        if (paisOrigem == 'M' || meioTransporte == 'A')
        {
            valorSeguro = precoUnidade / 2;
        } // end if
        else
        {
            valorSeguro = 0;
        } // end else

        // calculo preço final
        precoFinal = precoUnidade + imposto + valorTransporte + valorSeguro;

        // imprime informações individuais
        printf("\nValor Imposto: %.2f", imposto);
        printf("\nValor Transporte: %.2f", valorTransporte);
        printf("\nValor do seguro: %.2f", valorSeguro);
        printf("\nPreço Final: %.2f", precoFinal);

    } // end while

    // imprime total de impostos
    printf("\nTotal de Impostos: %.2f", totalImposto);

    return 0;
} // end main