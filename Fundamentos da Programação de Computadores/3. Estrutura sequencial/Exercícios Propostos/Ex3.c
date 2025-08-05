// Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
// segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
// com validações
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, divisao;

    scanf("%d%d", &x, &y);

    divisao = x / y;

    printf("Divisao: %d", divisao);

    return 0;
} // end main
