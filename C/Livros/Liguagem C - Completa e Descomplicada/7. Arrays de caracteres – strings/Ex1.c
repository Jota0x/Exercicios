/*
Faça um programa que leia uma string e a imprima na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    printf("%s", palavra);

    free(palavra);

    return 0;

} // end main