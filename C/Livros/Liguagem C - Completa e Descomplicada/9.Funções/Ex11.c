/*
Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule
e retorne o resultado de x y para o programa principal. Não use nenhuma função
pronta para isso.
*/
#include <stdio.h>

int exponencial(int base, int expoente);

int main()
{
    int x, y;

    scanf("%d%d");

    printf("%d", exponencial(x, y));

    return 0;
} // end main

int exponencial(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else
        return base * exponencial(base, expoente - 1);

} // end expoencial