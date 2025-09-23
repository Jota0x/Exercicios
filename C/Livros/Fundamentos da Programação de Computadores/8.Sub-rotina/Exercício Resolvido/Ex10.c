/*
Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo N e retorne o valor de S,
obtido pelo seguinte cálculo:
S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/
#include <stdio.h>

float S(int n);
float fatorial(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%f", S(n));

    return 0;
} // end main

float S(int n)
{
    float S = 0;

    // loop principal
    for (int i = 0; i < n; i++)
    {

        S += 1.0f / fatorial(i);
    } // end fir
}

float fatorial(int n)
{
    if (n == 0 || n == 1)

        return 1;
    else

        return n * fatorial(n - 1);

} // end fatorial