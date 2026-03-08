/*
Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir,
em que usamos n = 4:
*
**
***
****
***
**
*
*/
#include <stdio.h>

void ponto(int n);

int main()
{
    int n;

    scanf("%d", &n);

    ponto(n);

    return 0;
} // end main

void ponto(int n)
{
    // loop principal
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        } // end for

        printf("\n");

    } // end for
} // end ponto