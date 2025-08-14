// Faça um programa que leia um número inteiro e verifique se esse número é par
// ou ímpar
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("Eh par");
    } // end if
    else
        printf("Eh impar");

    return 0;
} // end main