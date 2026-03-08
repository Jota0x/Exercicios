/*Faça um programa que receba o valor do salário mínimo, uma lista contendo a quantidade de quilo-
watts gasta por consumidor e o tipo de consumidor (1 — residencial; 2 — comercial; ou 3 — indus-
trial) e que calcule e mostre:
■■ o valor de cada quilowatt, sabendo que o quilowatt custa um oitavo do salário mínimo;
■■ o valor a ser pago por consumidor (conta final mais acréscimo). O acréscimo encontra-se na tabela
a seguir:
PASCAL
C/C++
J A V A
142 | Fundamentos da programação de computadores
TIpO % dE ACRéSCIMO SObRE O
VALOR gASTO
1 5
2 10
3 15
■■ o faturamento geral da empresa;
■■ a quantidade de consumidores que pagam entre R$ 500,00 e R$ 1.000,00.
Termine a entrada de dados com quantidade de quilowats igual a zero */
#include <stdio.h>

int main()
{
    float salarioMin, qtKgwatts, valorKgwatts, acrescimo, faturamento = 0, faturamentoTotal = 0;
    int consumidor, qtConsumidor = 0;

    // le salario minimo, qt kilowatts e o tipo de consumidor
    scanf("%f%f%d", &salarioMin, &qtKgwatts, &consumidor);

    while (qtKgwatts != 0)
    {
        // valor do Kgwatt
        valorKgwatts = salarioMin / 8;

        // trata tipo de consumidor
        if (consumidor == 1)
        {
            acrescimo = valorKgwatts * 0.05f;
        } // end if
        else if (consumidor == 2)
        {
            acrescimo = valorKgwatts * 0.10f;
        } // end else if
        else
        {
            acrescimo = valorKgwatts * 0.15f;
        } // end else

        // trata faturamento individual e total
        faturamento = valorKgwatts + acrescimo;
        faturamentoTotal += faturamento;

        // trata total de consumidores que pagam entre 500 e 1000
        if (faturamento > 500 && faturamento < 1000)
        {
            qtConsumidor++;
        } // end if

        // impressão das informações individuais
        printf("Valor KgWatt: %f", valorKgwatts);
        printf("Valor pago pelo consumidor: %f\n", faturamento);

        // proximas leituras
        scanf("%f%f%d", &salarioMin, &qtKgwatts, &consumidor);

    } // end while

    // impressão das informações globais
    printf("\nFaturamento total da Empresa: %f", faturamentoTotal);
    printf("\n Quantidaded de consumidores que pagam entre 500 e 1000: %d", qtConsumidor);

    return 0;
} // end main