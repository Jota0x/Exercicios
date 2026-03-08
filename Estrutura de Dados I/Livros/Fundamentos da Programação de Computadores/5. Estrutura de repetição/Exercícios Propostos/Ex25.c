/*
Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
TIpO dESCRIçãO RENdIMENTO MENSAL
1 Poupança 1,5%
2 Poupança plus 2%
3 Fundos de renda fixa 4%
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
*/
#include <stdio.h>

int main()
{
    int codigo, tipo;
    float valor, juros, totalJuros, total;

    scanf("%d%d%f", &codigo, &tipo, &valor);

    // loop principal
    while (codigo > 0)
    {

        if (tipo == 1)
        {
            juros = valor * 0.015f;
        }
        else if (tipo == 2)
        {
            juros = valor * 0.02f;
        }
        else if (tipo == 3)
        {
            juros = valor * 0.04f;
        }
        else
            printf("opcao invalida");

        totalJuros += juros;
        total += valor;

        printf("Rendimento mensal: %f", juros);

        scanf("%d%d%f", &codigo, &tipo, &valor);

    } // end while

    printf("Total: %.2f Total Juros: %.2f", total, totalJuros);

    return 0;
} // end main
