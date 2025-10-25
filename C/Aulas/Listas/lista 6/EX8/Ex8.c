#include <stdio.h>

int main()
{
    int veiculos;
    float aluguel, multa, manutencao, faturamento = 0, totalAluguel;

    FILE *arquivo;

    // abre arquivo para escrita
    arquivo = fopen("resultado.txt", "w");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {

        // le quantidade de veiculos e valor de aluguel
        scanf("%d%f", &veiculos, &aluguel);

        totalAluguel = (veiculos / 3) * (aluguel * 12); // calculo do aluguel

        multa = ((veiculos / 3) / 10) * aluguel * 0.20; // valor da multa

        manutencao = (veiculos * 0.02) * 600; // valor gasto com manutenção

        faturamento = totalAluguel + multa - manutencao; // calculo do faturamento

        printf("%.2f\n", faturamento);
        fprintf(arquivo, "%.2f\n", faturamento);
        printf("%.2f\n", multa);
        fprintf(arquivo, "%.2f\n", multa);
        printf("%.2f\n", manutencao);
        fprintf(arquivo, "%.2f\n", manutencao);

        fclose(arquivo);
    }

    return 0;
} // end main