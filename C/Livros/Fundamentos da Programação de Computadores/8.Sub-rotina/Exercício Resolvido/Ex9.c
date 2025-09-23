/*
Faça uma sub-rotina que leia cinco valores inteiros, determine e mostre o maior e o menor deles
*/
#include <stdio.h>

void maior();

int main()
{

    maior();

    return 0;

} // end main

void maior()
{
    int n;
    int maior = -1;

    // loop principal
    for (int i = 0; i < 5; i++)
    {
        // le numero
        scanf("%d", &n);

        // trata maior
        if (n > maior)
        {
            maior = n;
        } // end if

    } // end for

    printf("%d", maior);

} // end maior