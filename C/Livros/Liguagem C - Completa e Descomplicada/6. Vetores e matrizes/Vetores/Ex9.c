/*
Faça um programa que receba do usuário dois arrays, A e B, com 10 números in-
teiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.
*/
#include <stdio.h>

int main()
{
    int A[10], B[10], C[10];

    for (int i = 0; i < 10; i++)
        scanf("%d%d", &A[i], &B[i]);

    for (int i = 0; i < 10; i++)
        C[i] = A[i] - B[i];

    for (int i = 0; i < 10; i++)
        printf("%d", C[i]);

    return 0;
} // end main