// Faça um programa que receba um número inteiro maior do que 1 e verifique se o
// número fornecido é primo ou não.
#include <stdio.h>
#include <math.h>

int main()
{
    int x;

    scanf("%d", &x);

    //logica para achar primo
    for (int i = 2; i < sqrt(x); i++) // divide o numero de 2 até a sua raiz
    {
        if (x % i == 0)
        {
            printf("Nao eh primo");
        } // end if
        else
            printf("Eh primo");
    } // end for

    return 0;
} // end main