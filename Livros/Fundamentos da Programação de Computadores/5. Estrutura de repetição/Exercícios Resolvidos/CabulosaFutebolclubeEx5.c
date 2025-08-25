// Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
// da série a seguir:
#include <stdio.h>

// prototipo da função
float fatorial(int n);
float potencia(int base, int expoente);

int main()
{
    float S, expoente, numerador, denominador;
    int x;

    // le x para numero de termos
    scanf("%d", &x);
    // loop principal para calculo de S
    for (int i = 0; i < x; i++)
    {

    } // end for
} // end main

// fatorial recursiva
float fatorial(int n)
{
    // condição de parada
    if (n == 1)
        return 1;
    // metodo recursivo
    else
        return n * fatorial(n - 1);
} // fatorial

// potencia recursiva
float potencia(int base, int expoente)
{
    // condições de parada
    if (expoente == 0)
        return 1;
    // metodo recursivo
    else
        return base * potencia(base, expoente - 1);

    return;
} // potencia