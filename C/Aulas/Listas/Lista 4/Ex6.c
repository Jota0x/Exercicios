#include <stdio.h>

int contarAlgarismo(int n, int aux);

int main()
{
    int n, aux = 0;

    // le numero
    scanf("%d", &n);

    printf("%d", contarAlgarismo(n, aux));

    return 0;
} // end main

int contarAlgarismo(int n, int aux)
{
    if (n == 0)
        return aux;
    else
        aux++;
    return contarAlgarismo(n / 10, aux);

} // end contarNumero