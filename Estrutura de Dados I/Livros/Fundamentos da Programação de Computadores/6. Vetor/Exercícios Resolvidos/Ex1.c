/*
Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números
primos e suas respectivas posições
*/
#include <stdio.h>
#include <math.h>

void leNum(int num[]);
void ehPrimo(int num[]);

int main()
{
    int num[9];

    leNum(num);

    ehPrimo(num);

    return 0;

} // end main

void leNum(int num[])
{
    // loop principal
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
    } // end for

} // end leNum

void ehPrimo(int num[])
{
    int cont;

    // percorre vetor
    for (int i = 0; i < 9; i++)
    {
        cont = 0;

        // trata primo
        for (int j = 2; j <= sqrt(num[i]); j++)
        {
            if (num[i] % j == 0)
                cont = 1;
        } // end for

        if (cont == 0)
            printf("%d %d", num[i], i);

    } // end for

} // end ehPrimo