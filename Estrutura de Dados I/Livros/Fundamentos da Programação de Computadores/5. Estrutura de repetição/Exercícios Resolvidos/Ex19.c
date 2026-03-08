// Faça um programa que leia um número não determinado de pares de valores [m,n], todos inteiros e
// positivos, um par de cada vez, e que calcule e mostre a soma de todos os números inteiros entre m e n
//(inclusive). A digitação de pares terminará quando m for maior ou igual a n.
#include <stdio.h>

int main()
{
    int m, n, soma = 0;

    // primeira leitura de m e n
    printf("Dois valores: ");
    scanf("%d%d", &m, &n);

    // loop principal
    while (m < n)
    {
        // loop para soma dos numeros de m até n
        for (int i = m + 1; i < n; i++)
        {
            soma += i;
        } // end for

        // imprime soma
        printf("Soma de todos os numeros inteiros entre m e n: %d", soma);

        // futurasinterações até condição de parada
        printf("\nDois valores: ");
        scanf("%d%d", &m, &n);

    } // end while

    return 0;
} // end main