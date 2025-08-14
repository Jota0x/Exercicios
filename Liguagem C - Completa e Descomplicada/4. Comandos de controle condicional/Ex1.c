// Faça um programa que leia dois números e mostre qual deles é o maior.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, y, maior;

    scanf("%d%d", &x, &y);

    if (x > y)
    {
        maior = x;
    } // end if
    else
        maior = y;

    printf("%d", maior);

    return 0;
} // end main