// Escreva um programa que leia certa quantidade de números, imprima o maior
// deles e quantas vezes o maior número foi lido. A quantidade de números a serem
// lidos deve ser fornecida pelo usuário.
#include <stdio.h>

int main()
{
    int n, maior = 0, contador = 0;

    // le quantidade de numeros
    scanf("%d", &n);

    // define o primeiro numero como maior
    scanf("%d", &maior);

    for (int i = 0; i < n; i++)
    {
        // le os numeros
        scanf("%d", &i);

        // acha o maior
        if (maior < i)
        {
            maior = i;
            contador = 1; //reseta contador quanto novo mairo surgir 
        } // end if
        // verifica quantas vezes maior apareceu
        else if (maior == i)
        {
            contador++;
        } // end else if

    } // end for

    printf("Maior: %d Apareceu %d vezes", maior, contador);

    return 0;
} // end main