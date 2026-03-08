#include <stdio.h>

// prototipo função
float s(int N);
float fatorial(int n);

int main()
{
    int n;

    // le numero de vezes
    scanf("%d", &n);

    printf("%f", s(n));

    return 0;
} // end main

float s(int N)
{
    float S = 1;

    // loop principal
    // calculo de S
    for (int i = 1; i <= N; i++)
    {
        S += 1.0f / fatorial(i);
    } // end for

    return S;
} // end s

// fatorial recursivo
float fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    } // end if
    else
        return n * fatorial(n - 1);

} // end float