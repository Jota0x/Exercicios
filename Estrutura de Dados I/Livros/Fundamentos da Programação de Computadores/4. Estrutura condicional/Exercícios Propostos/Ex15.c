// Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
// grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
// investimento, de acordo com o tipo de investimento.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, novoValor;
    int opcao;

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        scanf("%f", &valor);

        novoValor = valor + (valor * 0.03f);
        break;

    case 2:
        scanf("%f", &valor);

        novoValor = valor + (valor * 0.04f);

        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;

} // end main