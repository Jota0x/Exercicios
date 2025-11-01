/*
Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra1 = (char *)malloc(50 * sizeof(char));
    char *palavra2 = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra1);
    scanf("%s", palavra2);

    if (strstr(palavra1, palavra2) != NULL)
        printf("esta contida");
    else
        printf("nao esta contida");

    free(palavra1);
    free(palavra2);

    return 0;

} // end main