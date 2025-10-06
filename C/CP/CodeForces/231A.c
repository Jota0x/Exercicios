#include <stdio.h>

int main()
{
    int n, aux = 0, valor;

    scanf("%d", &n);

    // le linhas
    for (int i = 0; i < n; i++)
    {
        int soma = 0;

        // le colunas
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &valor);

            // acrescenta valor a soma
            soma += valor;

        } // end for

        if (soma >= 2)
        {
            aux++;
        }

    } // end for

    printf("%d", aux);

    return 0;
} // end main