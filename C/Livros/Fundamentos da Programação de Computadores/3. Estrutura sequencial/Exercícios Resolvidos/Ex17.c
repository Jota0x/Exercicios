// Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
// cheques e agora deseja saber seu saldo atual. sabe-se que cada operação bancária de retirada paga
// cPMF de 0,38% e o saldo inicial da conta está zerado
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo = 0;

    scanf("%f %f %f", &salario, &cheque1, &cheque2);

    cpmf1 = cheque1 * 0.0038f; // calculo de 0.38% sobre primeiro cheque

    cpmf2 = cheque2 * 0.0038f; // calculo de 0.38% sobre o segudo cheque

    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

    printf("%.2f", saldo);

    return 0;
} // end main