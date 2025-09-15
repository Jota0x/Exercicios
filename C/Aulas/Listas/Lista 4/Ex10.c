#include <stdio.h>

// prototipo da função
double serie(int n);
double fatorial(int n);

int main()
{
    int n;

    // le numero
    scanf("%d", &n);

    printf("%.2lf", serie(n));

    return 0;
} // end main

double fatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);

    return 0;
} // end fatorial

double serie(int n)
{

    if (n == 0)
        return 0;

    else
        return (1.0 / fatorial(n)) + serie(n - 1);

} // end serie
