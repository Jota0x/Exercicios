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

    if (numerador < denominador)
    {
        return numerador;
    }
    else

        return divisao(numerador - denominador, denominador);

} // end divisao
