// Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
// um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
// seguir. Mostre o saldo médio e o valor do crédito.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, credito;

    scanf("%f", &saldo);

    if (saldo > 400)
    {
        credito = saldo + (saldo * 0.30f);
        printf("%f", credito);
    }
    else if (saldo < 400 && saldo >= 300)
    {
        credito = saldo + (saldo * 0.25f);
        printf("%f", credito);
    }
    else if (saldo < 300 && saldo >= 200)
    {
        credito = saldo + (saldo * 0.20f);
        printf("%f", credito);
    }
    else
        credito = saldo + (saldo * 0.10f);
    printf("%f", credito);

} // end main