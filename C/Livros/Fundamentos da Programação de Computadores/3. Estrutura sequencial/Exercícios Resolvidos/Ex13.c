// sabe-se que:
// pé = 12 polegadas
// 1 jarda = 3 pés
// 1 milha = 1,760 jarda
// Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
// a) polegadas;
// b) jardas;
// c) milhas.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pes, jarda, milha, polegadas;

    scanf("%f", &pes);

    polegadas = pes * 12;

    jarda = pes / 3;

    milha = (pes / 3) * 1.760;

    printf("Polegadas: %.2f Jardas: %.2f Milhas: %.2f", polegadas, jarda, milha);

    return 0;

} // end main