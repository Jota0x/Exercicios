//Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
//imprima o valor correspondente em dólares.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real,cotacao = 5.56, dolar = 0;

    scanf("%f",&real); // le real

    dolar = real/cotacao;

    printf("Valor em dolar: %.2f",dolar); //imprime valor de dolar 
    
    return 0;
}// end main