// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for (int i = 0; i <= 100; i++) // pega os primeiros 100 numeros
    {
        if (i % 2 == 0) // valida c é par
        {
            soma += i;
        } // end if
    } // end for

    printf("%d", soma);

} // end main