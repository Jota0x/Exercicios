#include <stdio.h>

int ordena(int *a, int *b, int *c);

int main()
{
    int resultado; // guarda 0 ou 1;
    int num1, num2, num3;

    // le valores
    scanf("%d%d%d", &num1, &num2, &num3);

    resultado = ordena(&num1, &num2, &num3);

    printf("Numeros Ordenados: %d %d %d", num1, num2, num3);

    if (resultado == 1)
    {
        printf("Numeros iguais\n");
    }
    else
        printf("Numeros diferentes\n");

    return 0;
} // end main

int ordena(int *a, int *b, int *c)
{
    int A = *a;
    int B = *b;
    int C = *c;
    int aux;

    // ordena os valores
    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if (*a > *c)
    {
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if (*b > *c)
    {
        aux = *b;
        *b = *c;
        *c = aux;
    }

    if (A == B && A == C)
    {
        return 1;
    }
    else
        return 0;

} // end ordene