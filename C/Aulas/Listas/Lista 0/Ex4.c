#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159 // define PI como 3,14159

int main()
{
    // configura o idioma
    // setlocale(LC_ALL, "pt_BR.UTF-8");

    // declarção das variaveis
    float raio, area, perimetro;

    // le raio
    scanf("%f", &raio);

    // calculo da area
    area = PI * (raio * raio);

    // calculo do perimetro
    perimetro = 2 * PI * raio;

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f", area);

    return 0;
} // end main