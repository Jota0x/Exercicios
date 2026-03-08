#include <stdio.h>

int exponencial(int base, int expoente);

int main()
{
    int base, expoente;

    scanf("%d%d", &base, &expoente);

    printf("%d", exponencial(base, expoente));

    return 0;
} // end main

int exponencial(int base, int expoente)
{
    if (expoente == 0)
        return 1;
    else
        return base * exponencial(base, expoente - 1);
} // exponencial