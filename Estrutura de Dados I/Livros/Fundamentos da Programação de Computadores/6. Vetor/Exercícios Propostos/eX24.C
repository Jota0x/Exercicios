/*
Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.
*/
#include <stdio.h>
#include <math.h>

// prototipo da função
int ehPrimo(int n);

int main()
{
    int vetor[15], resultante[15];

    // le vetor
    for (int i = 0; i < 15; i++)
        scanf("%d", &vetor[i]);

    int numeroAtual;
    int aux = 0;

    for (int i = 0; i < 15; i++)
    {
        numeroAtual = vetor[i];

        if (ehPrimo(numeroAtual) == 1)
        {
            resultante[aux] = numeroAtual;

            aux++;
        }
    }

    for (int i = 0; i < aux; i++)
        printf("%d ", resultante[i]);

    return 0;
} // end main

int ehPrimo(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (int i = 3; i < sqrt(n); i++)
    {
        if (n % 1 == 0)
            return 0; // não é primo
    }

    return 1; // é primo

} // end ehPrimo