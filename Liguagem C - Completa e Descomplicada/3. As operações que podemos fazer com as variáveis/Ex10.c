// A importância de R$780.000,00 será dividida entre três ganhadores de um con-
// curso, sendo que:
// i. O primeiro ganhador receberá 46% do total.
// ii. O segundo receberá 32% do total.
// iii. O terceiro receberá o restante.
// Calcule e imprima a quantia recebida por cada um dos ganhadores.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total = 780.000, primeiro, segundo, terceiro;

    primeiro = total * 0.46f;

    segundo = total * 0.32f;

    terceiro = total - (primeiro + segundo);

    printf(" %f\n %f\n %f\n ",primeiro,segundo,terceiro); // imprime valor do primeiro, segundo, terceiro

    return 0;
} // end main
