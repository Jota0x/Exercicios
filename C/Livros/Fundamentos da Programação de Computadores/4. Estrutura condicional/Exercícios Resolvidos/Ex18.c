// Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
// e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um
// triângulo, escreva uma mensagem. considere que:
// ■■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
// ■■ chama-se equilátero o triângulo que tem três lados iguais;
// ■■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
// ■■ recebe o nome de escaleno o triângulo que tem os três lados diferentes.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;

    scanf("%d%d%d", &lado1, &lado2, &lado3);

    // verifica c é triangulo
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
    {
        if (lado1 == lado2 && lado1 == lado3)
        {
            printf("Equilatero");
        } // end if
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Isosceles");
        } // end else if
        else
            printf("Escaleno");
        // end else if
    } // end if

    else
        printf("Essas medidas n formam um trinagulo");

    return 0;

} // end main