// Faça um programa que calcule e mostre a área de um trapézio.
// sabe-se que: A = ((base maior + base menor) * altura)/2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float baseMaior, baseMenor, altura, area = 0;

    scanf("%f%f%f", &baseMaior, &baseMenor, &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    prinf("valor da area: %f", area);

    return 0;

} // end main