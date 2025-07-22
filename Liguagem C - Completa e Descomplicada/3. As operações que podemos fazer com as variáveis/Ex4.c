// Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, media = 0;

    scanf("%f %f %f %f", &a, &b, &c, &d); // le 4 valores reais

    media = (a + b + c + d) / 4;

    prinf("Media: %f", media);

    return 0;

} // end main