#include <stdio.h>

// prototipo função
float s(int n);

int main()
{
    int n;

    // le numero de vezes
    scanf("%d", &n);

    printf("%f", s(n));

} // end main

float s(int n)
{
    float S = 0;
    float numerador = 2.0f, denominador = 4.0f, indice = 3;

    // loop principal
    // calculo de S
    for (int i = 0; i < n; i++)
    {
        S += numerador / denominador;

        numerador += indice;
        denominador++;
        indice += 2;
    } // end for

    return S;
} // end s