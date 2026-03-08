/*
Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
*/
#include <stdio.h>

int main()
{
    int x[101];

    for (int i = 0; i < 101; i++)
        x[i] = i * 7;

    for (int i = 0; i < 101; i++)
        printf(" %d ", x[i]);
    return 0;
} // end main