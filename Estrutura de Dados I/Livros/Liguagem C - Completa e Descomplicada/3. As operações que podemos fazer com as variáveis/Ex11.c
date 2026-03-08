// Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon-
// dente. A área do círculo é A = p * raio2, sendo p = 3.141592.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    float raio, area;

    scanf("%f", &raio); // le area

    area = PI * (raio * raio);

    printf("%f", area); // imprime area

    return 0;
} // end main
