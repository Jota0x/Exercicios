// Faça um programa para verificar se determinado número inteiro lido é divisível
// por 3 ou 5, mas não simultaneamente pelos dois
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, divisao, unidade, dezena, centena;

    scanf("%d", &x);

    unidade = x % 10;
    dezena = (x % 100) / 10;
    centena = x / 100;

    if ((unidade + dezena + centena) % 3 == 0)
    {
        printf("Divisivel por 3");
    }
    else if ((x) % 5 == 0)
    {
        printf("Divisivel por 5");
    }
    else
        printf("Nao eh divisivel por nenhum");

    return 0;
} // end main