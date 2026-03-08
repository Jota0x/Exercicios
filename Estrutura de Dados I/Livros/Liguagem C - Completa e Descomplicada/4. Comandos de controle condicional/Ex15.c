// Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
// seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
// calculadas como
// em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo
// grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensa-
// gem “Não é equação de segundo grau”. Do contrário, imprima:
// Se• ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
// Se• ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
// Se• ∆ > 0, existem duas raízes reais. Imprima as raízes.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta, x1, x2;

    scanf("%d%d%d", &a, &b, &c);

    if (a < 0)
    {
        printf("A tem q ser > 0");
        return 1; // para programa
    } // end if
    else if (a == 0)
    {
        printf("Não é equacao de 2 grau");
    } // end else if

    delta = (b * b) - 4 * a * c;

    x1 = (-b + sqrt(delta)) / 2 * a;
    x2 = (-b - sqrt(delta)) / 2 * a;

    if (delta < 0)
    {
        printf("Noa existe real");
    }
    else if (delta == 0)
    {
        printf("Existe uma raiz real: %f", x1);
    }
    else
        printf("Existe duas raizes reais: %f %f", x1, x2);

    return 0;
} // end main