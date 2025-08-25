// Faça um programa que leia um caractere do tipo char e depois o imprima entre
// aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
#include <stdio.h>

int main()
{
    char X;

    scanf("%c", &X); // le char

    printf("\"%c\"", X); // imprime char em "" comando: \""

    return 0;
} // end main