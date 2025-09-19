#include <stdio.h>

int contarAlgarismo(int n);

int main()
{
    int n;

    // le numero
    scanf("%d", &n);

    printf("%d", contarAlgarismo(n));

    return 0;
} // end main

int contarAlgarismo(int n)
{
    if (n == 0)
        return 0;
    else
        return 1 + contarAlgarismo(n / 10);

} // end contarNumero