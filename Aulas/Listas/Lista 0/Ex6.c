#include <stdio.h>

int main()
{
    // declaração variaveis
    int razao, primeiroTermo, PA;

    // le razao e primeiro termo
    scanf("%d%d", &razao, &primeiroTermo);

    // iguala o valor da PA com o do primeiro termo
    PA = primeiroTermo;

    // loop para PA
    for (int i = 0; i < 9; i++)
    {
        PA += razao;
    }// end for 

    printf("%d",PA);

    return 0;
} // end main