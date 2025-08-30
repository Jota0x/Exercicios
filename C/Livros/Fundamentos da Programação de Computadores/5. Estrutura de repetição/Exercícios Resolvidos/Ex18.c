// Faça um programa que leia um conjunto não determinado de valores e mostre o valor lido, seu quadra-
// do, seu cubo e sua raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.
#include <stdio.h>
#include <math.h>

int main()
{
    float n, quadrado, raizQuadrada, raizCubica;

    // primeira interação
    // dar valor de n
    printf("Digite Numero, [0 ou < para parar]: ");
    scanf("%f", &n);

    // loop principal
    // ocorre quando n > 0
    while (n > 0)
    {

        quadrado = n * n;

        raizQuadrada = sqrt(n);

        raizCubica = cbrt(n);

        printf("Quadrado: %.2f RaizQuadrada: %.2f RaizCubica: %.2f", quadrado, raizQuadrada, raizCubica);

        // interações seguintes até n < 0
        printf("\nDigite Numero, [0 ou < para parar]: ");
        scanf("%f", &n);

    }; // end while

    return 0;
} // end main