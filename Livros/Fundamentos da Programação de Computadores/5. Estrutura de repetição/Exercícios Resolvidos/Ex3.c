// Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
// lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.
#include <stdio.h>

// prototipo da função
double fatorial(int N);

int main()
{
    int N;

    // le N
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {   
        scanf("%d",&N);
        printf(" \n| Numero Lido: %d Fatorial: %.2lf | ", N, fatorial(N));
    } // end for

    return 0;
} // end main

// função recursiva fatorial
double fatorial(int N)
{
    if (N == 1)
    {
        //caso base
        return 1;
    }
    else
        //metodo recursivo
        return N * fatorial(N - 1);
}