#include <stdio.h>

int main()
{
    // declaração variáveis
    char sinal;

    // le sinal
    scanf(" %c", &sinal);

    switch (sinal)
    {
    case '<':
        printf("SINAL DE MENOR");
        break;

    case '>':
        printf("SINAL DE MAIOR");
        break;

    case '=':
        printf("SINAL DE IGUAL");
        break;

    default:
        printf("OUTRO SINAL");
        break;
    }

    return 0;
} // end main