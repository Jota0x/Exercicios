#include <stdio.h>

// prototipo da função
double fatorial(int n);

int main()
{
    double E = 1;
    int N;

    // le N
    scanf("%d", &N);

    // loop principal
    for (int i = 1; i <= N; i++)
    { // chama a função recursiva de fatorial para calculo
        E += 1.0f / fatorial(i);
    } // end for

    //imprime E
    printf("%.2lf", E);

    return 0;
} // end main

//fatorial recursiva 
double fatorial(int N)
{
    if (N == 1)
        return 1;
    else
        return N * fatorial(N - 1);

} // fatorial