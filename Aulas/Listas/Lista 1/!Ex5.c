#include <stdio.h>

int main()
{
    // declaração variavel
    float valorDiaria, diariaPromocao, valorTotal80, valorTotal50, diferenca;

    // le valor da diaria
    scanf("%f", &valorDiaria);

    // desconto de 25%
    diariaPromocao = valorDiaria - (valorDiaria * 0.25f);

    valorTotal50 = valorDiaria * ((int)75 * 0.50f);

    valorTotal80 = diariaPromocao * ((int)75 * 0.80f);

    diferenca = valorTotal80 - valorTotal50;

    printf("%.2f\n", diariaPromocao);
    printf("%.2f\n", valorTotal80);
    printf("%.2f\n", valorTotal50);
    printf("%.2f", diferenca);

    return 0;
} // end main