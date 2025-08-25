// Faça um programa que monte os oito primeiros termos da sequência de Fibonacci.
#include <stdio.h>

int main()
{
    int a, b, auxiliar;

    a = 0;
    b = 1;

    //imprime primeiro valor de a, ou seja 0
    printf("- %d -", a);

    for (int i = 0; i < 9; i++)
    {
        auxiliar = b;

        b += a;

        a = auxiliar;

        printf("- %d -", a);

    } // end for

} // end main