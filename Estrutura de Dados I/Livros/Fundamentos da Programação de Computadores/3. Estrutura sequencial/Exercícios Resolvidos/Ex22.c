// sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que rece-
// ba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. calcule e
// mostre:
// a) o valor de cada quilowatt;
// b) o valor a ser pago por essa residência;
// c) o valor a ser pago com desconto de 15%.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMin, kgWatts, valorKgWatts, valorPago, valorDesconto;

    scanf("%f %f", &salarioMin, &kgWatts);

    valorKgWatts = salarioMin / 5;

    valorPago = kgWatts * valorKgWatts;

    valorDesconto = valorPago - (valorPago * 0.15f);

    printf("Valor Kg watts: %.2f  Valor total pago: %.2f Valor com deconto; %.2f", valorKgWatts, valorPago, valorDesconto);

    return 0;
} // end main