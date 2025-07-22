// Faça um programa que leia um número inteiro e retorne seu antecessor e seu su-
// cessor.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, antecessor, sucessor;

    scanf("%d", &X); // le inteiro

    antecessor = X - 1;

    sucessor = X + 1;

    printf("Antecessor: %d, Sucessor: %d", antecessor, sucessor); //imprime antecessor e sucessor
    
    return 0;
} // end main