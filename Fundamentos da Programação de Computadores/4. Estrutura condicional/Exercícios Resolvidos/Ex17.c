// Faça um programa para resolver equações do 2 o grau.
// ax 2 + bx + c = 0
// A variável a deve ser diferente de zero.
// ∆ = b2 -4 * a * c
// ∆ < 0 → não existe raiz real
// ∆ = 0 → existe uma raiz real
// x = (-b) / (2 * a)
// ∆ > 0 → existem duas raízes reais
// x1 = (-b + ∆)/ (2 * a)
// x2 = (-b - ∆)/ (2 * a)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x, x1, x2;

    scanf("%f%f%f", &a, &b, &c);

    // verifica valor de a
    if (a == 0)
    {
        printf("Varialvel A nao pode ser igaul a 0");
        return 1; // para o pragrama em caso de a < 0
    }

    delta = pow(b, 2) - 4 * a * c;

    // analise do delta
    if (delta < 0)
    {
        printf("Nao existe raiz real\n");
    } // end if
    else if (delta > 0)
    {
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);

        printf("Existe duas raizes reais X1: %.2f X2: %.2f", x1, x2);
    } // end else if
    else if (delta == 0)
    {
        x = (-b) / (2 * a);
        printf("Existe uma raiz real: %.2f", x);
    } // end else if

    // analise do delta

        return 0;
} // end main