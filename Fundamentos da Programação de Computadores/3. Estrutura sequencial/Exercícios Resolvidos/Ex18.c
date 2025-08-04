// Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
// quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
// mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
// cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoSaco, gato1, gato2, restante;

    scanf("%f %f %f", &pesoSaco, &gato1, &gato2);

    restante = pesoSaco - ((gato1 + gato2) * 5);

    printf("%.2f",restante);

    return 0;
} // end main