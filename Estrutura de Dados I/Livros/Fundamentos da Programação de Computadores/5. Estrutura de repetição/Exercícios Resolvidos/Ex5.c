// Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
// da série a seguir:
#include <stdio.h>

// prototipo das funções
float fatorial(int n);
float exponencial(int base, int expoente);

int main()
{
    int expoente = 2, base, nVezes;
    float S = 0;
    int fat = 1, incremento = 1;

    // le quantidade de vezes e a base do expoente
    scanf("%d%d", &nVezes, &base);

    // loop principal
    for (int i = 1; i <= nVezes; i++)
    {

        // verifica valor do sinal
        if (i % 2 == 1)
        {
            S -= (exponencial(base, expoente) / fatorial(fat));
        } // end if
        else
        {
            S += (exponencial(base, expoente) / fatorial(fat));
        } // end else

        // condicional de controde da fatorial
        if (fat == 1)
        {
            incremento = 1;
        } // end if
        else if (fat == 4)
        {
            incremento = -1;
        } // end else if

        // calculo de incremento da fatorial
        fat += incremento;

        // incrementa mais 1 a variavel expoente
        expoente++;

    } // end for

    printf("S eh: %.2f", S);

    return 0;
} // end main

// calculo da fatorial
float fatorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fatorial(n - 1);

} // end fatorial

// calculo da exponecial
float exponencial(int base, int expoente)
{
    if (expoente == 0)
        return 1;
    else
        return base * exponencial(base, expoente - 1);
} // end float