#include <stdio.h>

// prototipo da função
double fatorial(int n);

int main()
{
    double E = 0;
    int N;

    // le N
    scanf("%d", &N);

    // loop principal
    for (int i = 0; i <= N; i++)
    { // chama a função recursiva de fatorial para calculo
        E += 1.0 / fatorial(i);
    } // end for

    printf("%.2lf", E);

    return 0;
} // end main

double fatorial(int N)
{
    int fat = 1;

    // loop principal
    for (int i = N; i <= 1; i--)
    {
        //calculo fat 
        fat *= N;
    } // end for

    return fat;

} // fatorial