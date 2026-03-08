// Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
// valores e apresente o resultado na tela.Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
// valores e apresente o resultado na tela.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;

    printf("10 valores\n");

    // le 10 valores e os soma
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        soma += n;

    } // end for

    printf("%d", soma);

} // end main