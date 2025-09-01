#include <stdio.h>
#include <locale.h>

int main()
{
    // configura o idioma
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // declaração variavel
    float valorDiaria, diariaPromocao, valorTotal80, valorTotal50, diferenca;

    // le valor da diaria
    scanf("%f", &valorDiaria);

    // desconto de 25%
    diariaPromocao = valorDiaria - (valorDiaria * 0.25f);

    valorTotal50 = valorDiaria * (80 * 0.50f);

    valorTotal80 = diariaPromocao * (80 * 0.80f);

    diferenca = valorTotal80 - valorTotal50;

    printf("Valor promocinal: %.2f\n", diariaPromocao);
    printf("Promocional com 80%% ocupado: %.2f\n", valorTotal80);
    printf("Normal com 50%% ocupado: %.2f\n", valorTotal50);
    printf("Diferença entre os valores: %.2f", diferenca);

    return 0;
} // end main