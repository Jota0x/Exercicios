/*Escreva uma função que receba por parâmetro dois números e retorne o maior
deles.
*/
#include <stdio.h>

int maior(int x, int y);

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d", maior(x, y));

    return 0;
}

int maior(int x, int y)
{
    int maior;

    if (x > y)
        maior = x;
    else
        maior = y;

    return maior;
}