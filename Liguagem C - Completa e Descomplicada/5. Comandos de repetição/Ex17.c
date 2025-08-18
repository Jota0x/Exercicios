// Escreva um programa que leia um número inteiro positivo N e em seguida impri-
// ma N linhas do chamado triângulo de Floyd:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i);
    } // end main

} // end main