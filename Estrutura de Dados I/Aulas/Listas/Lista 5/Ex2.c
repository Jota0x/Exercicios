#include <stdio.h>

int main()
{
    // variaveis
    int a, b;
    int *maior;

    // le inteiros
    scanf("%d%d", &a, &b);

    maior = &a;

    // trata maior
    if (&b > &a)
        maior = &b;

    // imprime informações
    printf("Maior endereco: %p", *maior);

    return 0;
} // end main