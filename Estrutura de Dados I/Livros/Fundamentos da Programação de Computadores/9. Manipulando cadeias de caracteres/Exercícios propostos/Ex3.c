/*
Faça um programa que receba uma frase e gere uma nova, retirando os espaços excedentes no início e no fim
da frase e entre suas palavras.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *frase = (char*)malloc(100 * sizeof(char));

    fgets(frase,100,stdin);

    for(int i = 0; i < strlen(frase);i++)
    {


    }



    return 0;
} // end main