/*
Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
iguais e os escreva na tela.
*/
#include <stdio.h>

int main()
{
    int n[10];
    int contador = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &n[i]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (n[i] == n[j])
                printf("Numero igual: %d\n", n[i]);
        }
    } // enf for

    printf("%d", contador);

    return 0;
} // end main