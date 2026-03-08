// Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
// valor do rendimento e o valor total depois do rendimento.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float deposito,taxa,rendimento = 0,total = 0;

    scanf("%f %f",&deposito,&taxa);

    rendimento = deposito * (taxa/100);

    total = deposito + rendimento;

    printf("\n%.2f \n%.2f",rendimento,total);

    return 0;
}// end main