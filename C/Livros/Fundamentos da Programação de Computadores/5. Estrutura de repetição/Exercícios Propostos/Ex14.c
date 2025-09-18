/*
Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opi-
nião de quinze espectadores, calcule e mostre:
■■ a média das idades das pessoas que responderam ótimo;
■■ a quantidade de pessoas que responderam regular; e
■■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.
*/

#include <stdio.h>

int main()
{
    int idade, opiniao, aux = 0, aux2 = 0;
    float mediaIdade = 0, aux3 = 0;

    // loop principal
    for (int i = 0; i < 15; i++)
    {
        // le idade e opinião
        scanf("%d%d", &idade, &opiniao);

        // trata opinião
        if (opiniao == 3)
        {
            mediaIdade += idade;
            aux++;
        }
        else if (opiniao == 2)
        {
            aux2++;
        }
        else
            aux3++;

    } // end for

    // imprime
    printf("%f", mediaIdade / aux);
    printf("%d", aux2); // quantidade regular
    printf("%f%%", (aux3 / 15) * 100);

    return 0;
} // end main