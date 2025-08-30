// Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor
// E, conforme a fórmula a seguir:
#include <stdio.h>
// prototipo da função
int fatorialRecursao(int n);

int main()
{
    double E = 0;
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        E += (1.0f / fatorialRecursao(i)); // ponto flutuante para melhor precisao

    } // end for

    // escreve E
    printf("%lf", E);

    return 0;
} // end main

int fatorialRecursao(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * fatorialRecursao(n - 1);

} // fatorialRecursao