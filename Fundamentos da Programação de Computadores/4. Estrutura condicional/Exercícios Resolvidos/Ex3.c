// Faça um programa que receba dois números e mostre o maior.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, y, maior;

    scanf("%d%d", &x, &y);

    if (x > y)
    {
        maior = x;
        printf("%d", maior);
    }
    else if (x == y)
    {
        printf("Os numeros sao iguais");
    }
    else
    {
        maior = y;
        printf("%d", maior);
    }

    return 0;
} // end main