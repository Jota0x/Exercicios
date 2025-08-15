// Uma empresa vende o mesmo produto para quatro diferentes estados. Cada es-
// tado possui uma taxa diferente de imposto sobre o produto. Faça um programa
// em que o usuário entre com o valor e o estado de destino do produto e o pro-
// grama retorne o preço final do produto acrescido do imposto do estado em que
// ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
// de erro.
//  Estado MG SP RJ MS
// Imposto 7% 12% 15% 8%
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, imposto, precoFinal;
    char estado[2];

    scanf("%f %s", &valor, &estado[2]);

    if (estado[2] == 'MG')
    {
        imposto = valor * 0.07f;
    } // end if
    else if (estado[2] == 'SP')
    {
        imposto = valor * 0.12f;
    } // end else if
    else if (estado[2] == 'RJ')
    {
        imposto = valor * 0.15f;
    } // end else if
    else if (estado[2] == 'MS')
    {
        imposto = valor * 0.08f;
    } // end else if
    else
        printf("Erro!");

    precoFinal = valor + imposto;

    printf("Valor Final: %f", precoFinal);

    return 0;
} // end main