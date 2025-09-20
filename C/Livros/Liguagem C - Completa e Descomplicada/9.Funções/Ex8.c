/*
Elabore uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como
o quadrado de outro número inteiro. Exemplos: 1, 4, 9.
*/
#include <stdio.h>
#include <math.h>

void quadradoPerfeito(int n);

int main()
{
    int n;

    scanf("%d", &n);

    quadradoPerfeito(n);

    return 0;
} // end main

void quadradoPerfeito(int n)
{
    float raiz;

    raiz = sqrt(n);

    if ((int)raiz * (int)raiz == n)
    {
        printf("Quadrado Perfeito");
    }
    else
        printf("Nao quadrado perfeito");

} // end quadradoPerfeito
