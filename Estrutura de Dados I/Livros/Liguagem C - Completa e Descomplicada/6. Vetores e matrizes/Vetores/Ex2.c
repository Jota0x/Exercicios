/*
Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.
*/
#include <stdio.h>

int main()
{
    int x[6];

    // le valores
    for (int i = 0; i < 6; i++)
        scanf("%d", &x[i]);

    // imprime valores
    for (int i = 5; i >= 0; i--)
        printf("%d ", x[i]);

    return 0;
} // end main