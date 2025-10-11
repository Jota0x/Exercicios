/*
Faça um programa que receba do usuário um vetor X com 10 posições. Em segui-
da deverão ser impressos o maior e o menor elemento desse vetor.
*/
#include <stdio.h>

int main()
{
    int x[10];
    int menor = 1000;
    int maior = -1;

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);

        // trata maior e menor
        if (x[i] > maior)
            maior = x[i];
        else if (x[i] < menor)
            menor = x[i];
    } // end for

    // imprime maior e menor
    printf("Menor: %d Mairo : %d", menor, maior);

    return 0;
} // end main