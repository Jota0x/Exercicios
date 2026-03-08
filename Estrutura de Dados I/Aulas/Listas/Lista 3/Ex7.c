#include <stdio.h>
#include <stdbool.h>

// prototipo função
bool verdadeiro(int n);

int main()
{
    int n, numero;

    // le quantidade de vezes
    scanf("%d", &n);

    // loop principal
    for (int i = 0; i < n; i++)
    {
        // le numero
        scanf("%d", &numero);
        if (verdadeiro(numero) == true)
        {
            printf("SIM\n");
        }
        else
            printf("NAO\n");

    } // end for

    return 0;
} // end main

bool verdadeiro(int n)
{
    bool positivo = false;

    if (n > 0)
    {
        positivo = true;
    }

    return positivo;
} // end verdadeiro