// Escreva um programa que leia um número inteiro e mostre a multiplicação e a
// divisão desse número por dois (utilize os operadores de deslocamento de bits).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, divisao, multiplicacao;

    scanf("%d", &x);

    divisao = x >> 1; // move 1 bit pra direita Ex: 4 é 100 em binário depois da divisao, 4 = 010 em binário que é 2  

    multiplicacao = x << 1;// move 1 bit pra esquerda Ex: 4 é 100 em binário depois da divisão, 4 = 1000 em binário que é 8

    printf("\nDivisao por 2: %d", divisao);

    printf("\nMultiplicacao por 2: %d", multiplicacao);

    return 0;
} // end main