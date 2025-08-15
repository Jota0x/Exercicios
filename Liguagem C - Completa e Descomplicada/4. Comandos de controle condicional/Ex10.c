// Faça um programa que leia três números inteiros positivos e efetue o cálculo de
// uma das seguintes médias de acordo com um valor numérico digitado pelo usuá-
// rio e mostrado na tabela a seguir:
#include <stdio.h>
#include <stdlib.h>

int mian()
{
    int opcao, x, y, z, geometrica, ponderada, harmonica, aritmetica;

    // numeros
    scanf("%d%d%d", &x, &y, &z);

    // opção
    scanf("%d", opcao);

    switch (opcao)
    {
    case 1:
        geometrica = x * y * z;

        printf("%d", geometrica);

        break;
    case 2:
        ponderada = ((x + 2) * (y + 3) * z) / 6;

        printf("%d", ponderada);

        break;
    case 3:
        harmonica = 1 / ((1 / x) + (1 / y) + (1 / z));

        printf("%d", harmonica);

        break;
    case 4:
        aritmetica = (x + y + z) / 3;

        printf("%d", aritmetica);
        break;
    default:
        print("Erro");
        break;
    } // end switch

    return 0;
} // end main