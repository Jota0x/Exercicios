/*
Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.
*/
#include <stdio.h>

int main()
{
    int n[10];
    int aux = 0;
    // le valores
    for (int i = 0; i < 10; i++)
        scanf("%d", &n[i]);

    for (int i = 0; i < 10; i++)
        if (n[i] % 2 == 0)
            aux++;

    printf("Quantidade de pares: %d", aux);
    return 0;
} // end main