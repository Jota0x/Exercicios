/*
Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.
*/
#include <stdio.h>

int main()
{
    int x[6];

    // le numeros
    for (int i = 0; i < 6; i++)
        scanf("%d", &x[i]);

    // imprime valores
    for (int i = 0; i < 6; i++)
        printf("%d ", x[i]);

    return 0;
} // end main