#include <stdio.h>

// prototipo das funções
float fatorial(int n);

int main()
{
    int n;

    // le numero
    scanf("%d", &n);

    // imprime numero
    printf("%.0f", fatorial(n));

} // end main

float fatorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);

} // fatorial