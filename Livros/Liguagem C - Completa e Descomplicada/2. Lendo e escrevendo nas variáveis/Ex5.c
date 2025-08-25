// Faça um programa que leia um valor do tipo float e depois o imprima usando o
// operador “%d”. Veja o que aconteceu.
#include <stdio.h>

int main()
{
    float X;

    scanf("%f", &X); // le real

    printf("Valor lido: %d", X); // imprime inteiro

    return 0;
} // end main

//Resultado: ao ler real e imprimir inteiro a variável recebe valor 0