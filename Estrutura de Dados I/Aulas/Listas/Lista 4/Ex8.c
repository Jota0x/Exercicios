#include <stdio.h>

int divisao(int numerador, int denominador);

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d", divisao(x, y));

    return 0;
} // end main

int divisao(int numerador, int denominador)
{

    if (numerador <= 0)
    {
        return 0;
    }
    else

        return 1 + divisao(numerador - denominador, denominador);

} // end divisao
