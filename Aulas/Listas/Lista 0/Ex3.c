#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base, altura, perimetro, area, diagonal;

    scanf("%f%f", &base, &altura);

    perimetro = (2 * base) + (2 * altura);

    area = base * altura;

    diagonal = sqrt((base * base) + (altura * altura));

    printf("%.2f %.2f %.2f", perimetro, area, diagonal);

    return 0;
} // end main