// Faça um programa para calcular a área de um triângulo e que não permita a entrada de dados inváli-
// dos, ou seja, medidas menores ou iguais a 0
#include <stdio.h>

int main()
{
    float base, altura, area = 0;

    do
    {
        // le base e altura
        scanf("%f%f", &base, &altura);

        // valida triangulo
        if (base <= 0 || altura <= 0)
        {
            printf("triangulo invalido Base ou Altura < 0.0");
        } // end if
        else
            //calculo area
            area = (base * altura) / 2;
            //imprime area
            printf("%.2f", area);

    } while (base <= 0 || altura <= 0);

    return 0;

} // end main