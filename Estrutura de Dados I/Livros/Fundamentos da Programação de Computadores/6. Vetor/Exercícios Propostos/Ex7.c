/*
Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor.
*/
#include <stdio.h>

int main()
{

    int n[10], negativo = 0, somaPositivo = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &n[i]);

    for (int i = 0; i < 10; i++)
        if (n[i] < 0)
            somaPositivo += n[i];
        else
            negativo++;

    printf("Soma positivo: %d Quantidade de negativo: %d", somaPositivo, negativo);

    return 0;
} // end main