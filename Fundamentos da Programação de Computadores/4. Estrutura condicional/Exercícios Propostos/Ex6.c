// Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
// escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
// programa. As opções são:
// a) O primeiro número elevado ao segundo número.
// b) Raiz quadrada de cada um dos números.
// c) Raiz cúbica de cada um dos números.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, potencia, raizQuadrada1, raizCubica1, raizQuadrada2, raizCubica2;
    int opcao;

    scanf("%f%f", &x, &y);

    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        potencia = pow(x, y);

        printf("%f", potencia);

        break;
    case 2:
        raizQuadrada1 = sqrt(x);

        raizQuadrada2 = sqrt(y);

        printf("%f%f", raizQuadrada1, raizQuadrada2);
        break;

    case 3:
        raizCubica1 = cbrt(x);

        raizCubica2 = cbrt(y);

        printf("%f%f", raizCubica1, raizCubica2);

        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
} // end main