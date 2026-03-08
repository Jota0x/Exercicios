#include <stdio.h>

int main()
{
    // declarção variável
    int x, y, maior;
    // le os numeros
    scanf("%d%d", &x, &y);

    // achar o maior
    if (x < y)
    {
        maior = y;
    }
    else
        maior = x;

    // Escreve maior
    printf("%d", maior);

    return 0;
} // end main