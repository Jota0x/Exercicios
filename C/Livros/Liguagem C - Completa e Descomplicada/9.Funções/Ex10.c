/*
Escreva uma função que receba dois valores numéricos e um símbolo. Esse sím-
bolo representará a operação que se deseja efetuar com os números. Assim, se o
símbolo for “+”, deverá ser realizada uma adição, se for “−”, uma subtração, se for
“/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resulta-
do da operação para o programa principal.
*/
#include <stdio.h>

int main()
{
    float x, y;
    char simbolo;

    scanf("%f%f %c", &x, &y, &simbolo);

    printf("%.2f", calculadora);

    return 0;
} // end main

float calculadora(int x, int y, char simbolo)
{
    float resultado;
    if (simbolo == '+')
    {
        resultado = x + y;
    }
    else if (simbolo == '-')
    {
        resultado = x - y;
    }
    else if (simbolo == '/')
    {
        resultado = x / y;
    }
    else if (simbolo == '*')
    {
        resultado = x * y;
    }
    else
        return -1;

    return resultado;
}