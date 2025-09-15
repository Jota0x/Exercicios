#include <stdio.h>

// prototipo função
double s(int n);

int main()
{
    int n;

    // le numero de vezes
    scanf("%d", &n);

    printf("%lf", s(n));

} // end main

double s(int n)
{
    double S = 0.0; 

    // O loop deve ir de 1 a n
    for (int i = 1; i <= n; i++)
    {
        double numerador = (double)i * i + 1;
        double denominador = (double)i + 3;

        S += numerador / denominador;
    }

    return S;
} // end s