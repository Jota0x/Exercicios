/*
Escreva um programa que recebe uma string S e dois valores inteiros não negati-
vos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j
da string S.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));
    int i, j;

    scanf("%s", palavra);
    scanf("%d%d", &i, &j);

    for (int inicio = i - 1; inicio <= j; inicio++)
        printf("%c", palavra[inicio]);

    free(palavra);

    return 0;
} // end main