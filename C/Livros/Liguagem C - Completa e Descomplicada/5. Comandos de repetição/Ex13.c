// Faça um programa que exiba a soma de todos os números naturais abaixo de
// 1.000 que são múltiplos de 3 ou 5.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unidade, dezena, centena,soma   ;

    for (int i = 1; i <= 1000; i++)
    {
        unidade = i % 10;
        dezena = (i % 100) / 10;
        centena = i / 100;

        if ((unidade + dezena + centena) % 3 == 0 || (i) % 5 == 0)
        {
            //printf("%d \n",i); mostra os multiplos de 3 ou de 5
            soma += i;
        }

    } // end for

    printf("Soma: %d",soma);

    return 0;
} // end main