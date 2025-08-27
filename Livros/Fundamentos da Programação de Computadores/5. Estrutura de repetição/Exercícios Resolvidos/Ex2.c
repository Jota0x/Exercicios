// Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a
// fórmula a seguir:
//  E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
#include <stdio.h>

// prototipo função
double fatorial(int N);

int main()
{
    int N;
    double E = 1;

    // le N
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        E += (1.0f / fatorial(i));
    } // end for

    // escreve E
    printf("%lf", E);

    return 0;
} // end main

// função recursiva fatorial
double fatorial(int N)
{
    if (N == 1)
    {
        return 1;
    }
    else
        return N * fatorial(N - 1);
}// fatorial