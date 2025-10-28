/*
Elabore um programa que preencha uma matriz 12  4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:
■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
■■ o total vendido em cada semana durante todo o ano;
■■ o total vendido pela loja no ano.
*/
#include <stdio.h>

int main()
{
    int vendas[12][4];
    char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    // le vendas
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &vendas[i][j]);

    int total = 0;

    // imprime total de vendas no mes
    for (int i = 0; i < 12; i++)
    {
        int vendaTotal = 0;
        for (int j = 0; j < 4; j++)
        {
            vendaTotal += vendas[i][j];
            total += vendas[i][j];
        }

        printf("Mes: %s Total de Vendas: %d", meses[i], vendaTotal);
    }

    for (int j = 0; j < 4; j++)
    {
        int totalSemana = 0;

        for (int i = 0; i < 12; i++)
            totalSemana += vendas[i][j];

        printf("Semana: %d", totalSemana);
    }
    printf("Total: %d", total);

    return 0;
} // end main