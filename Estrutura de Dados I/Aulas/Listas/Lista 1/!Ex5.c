#include <stdio.h>

int main()
{
    // variavies
    float diaria, diariaComum = 0, diariaPromocao = 0, totalPromocao = 0;
    float diferenca = 0;

    // le diaria
    scanf("%f", &diaria);

    //calculo das diarias
    diariaPromocao = diaria * 0.75f;

    totalPromocao = diariaPromocao * (80 * 0.80f);

    diariaComum = diaria * (80 * 0.50f);

    diferenca = totalPromocao - diariaComum;

    //imprime valores
    printf("Valor promocional: %.2f", diariaPromocao);
    printf("\nPromocional com 80%% ocupado: %.2f", totalPromocao);
    printf("\nNormal com 50%% ocupado: %.2f", diariaComum);
    printf("\nDiferenca entre os valores: %.2f", diferenca);

    return 0;
} // end main