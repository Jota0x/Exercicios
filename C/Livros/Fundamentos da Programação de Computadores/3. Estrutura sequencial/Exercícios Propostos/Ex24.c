// Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
// vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. sabe-
//-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
// programa deve fazer as conversões e mostrá-las
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quantidadeDinheiro,dolar,marcoAlemao,libraEsterlina;

    scanf("%f",&quantidadeDinheiro);

    dolar = quantidadeDinheiro/1.80;

    marcoAlemao = quantidadeDinheiro / 2;

    libraEsterlina = quantidadeDinheiro / 3,57;

    printf("Dolar: %f Marco Alemao: %f Libra Esterlina: %f",dolar,marcoAlemao,libraEsterlina);

    return 0;
}// end main