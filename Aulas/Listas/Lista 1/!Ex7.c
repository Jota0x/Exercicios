#include <stdio.h>

int main()
{
    // declaração variaveis
    float x, y;

    // le x
    scanf("%f", &x);

    // calculo y
    y = x * x;

    // escreve y
    printf("%.2f", y);

    return 0;
} // end main