#include <stdio.h>

int main()
{
    // declaração das variaveis
    float salarioMin, kiloWatt, valor100Killowatt, valorPago, valorDesconto,kwUnidade;

    // le salario minimo e quantidade de kilowatt
    scanf("%f%f", &salarioMin, &kiloWatt);

    //valor 100 kW
    valor100Killowatt = salarioMin / 7;

    // valor da unidade
    kwUnidade = valor100Killowatt / 100;

    // valor paga sem desconto
    valorPago = kwUnidade * kiloWatt;

    // valor pago com desconto
    valorDesconto = valorPago - (valorPago * 0.10f);

    printf("Valor do kW: %.2f\n", kwUnidade);
    printf("Valor a pagar: %.2f\n", valorPago);
    printf("Valor com desconto: %.2f", valorDesconto);

    return 0;
} // end main