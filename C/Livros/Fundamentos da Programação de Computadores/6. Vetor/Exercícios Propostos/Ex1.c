/*
Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares.
*/
#include <stdio.h>

int main()
{
    int vetor[6], par = 0, impar = 0;

    // le vetor
    for (int i = 0; i < 6; i++)
        scanf("%d", &vetor[i]);

    for (int i = 0; i < 6; i++)
        if (vetor[i] % 2 == 0)
        {
            printf(" NUMERO PAR: %d ", vetor[i]);
            par++;
        }
        else
        {
            printf(" NUMERO IMPAR: %d", vetor[i]);
            impar++;
        }
    printf("\nNumero de pares: %d", par);
    printf("\nNumero de impares: %d", impar);

    return 0;
} // end main