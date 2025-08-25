// Faça um programa que receba quatro valores: I, A, B e c. Desses valores, I é inteiro e positivo, A, B e
// c são reais. Escreva os números A, B e c obedecendo à tabela a seguir.
// Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números
// digitados sejam diferentes um do outro.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C;
    int I;

    scanf("%f%f%f", &A, &B, &C);

    scanf("%d", &I);

    switch (I)
    {
    case 1:
        // logica pra A maior
        if (A > B && A > C)
        {
            if (B > C)
            {
                printf("%f %f %f", C, B, A);
            } // end if
            else
            {
                printf("%f %f %f", B, C, A);
            }
        } // end if

        // logica pra B maior
        if (B > A && B > C)
        {
            if (A > C)
            {
                printf("%f %f %f", C, A, B);
            } // end if
            else
            {
                printf("%f %f %f", A, C, B);
            }
        } // end if

        // logica pra C maior
        if (C > B && C > A)
        {
            if (B > A)
            {
                printf("%f %f %f", A, B, C);
            } // end if
            else
            {
                printf("%f %f %f", B, A, C);
            }
        } // end if

        break;
    case 2:
        // logica pra A maior
        if (A > B && A > C)
        {
            if (B > C)
            {
                printf("%f %f %f", A, B, C);
            } // end if
            else
            {
                printf("%f %f %f", A, C, B);
            }
        } // end if

        // logica pra B maior
        if (B > A && B > C)
        {
            if (A > C)
            {
                printf("%f %f %f", B, A, C);
            } // end if
            else
            {
                printf("%f %f %f", B, C, A);
            }
        } // end if

        // logica pra C maior
        if (C > B && C > A)
        {
            if (B > A)
            {
                printf("%f %f %f", C, B, A);
            } // end if
            else
            {
                printf("%f %f %f", C, A, B);
            }
        } // end if

        break;

    case 3:
        if (A > B && A > C)
        {
            printf("%f", A);
        }
        else if (B > A && B > C)
        {
            printf("%f", B);
        }
        else
        { // C é o maior
            printf("%f", C);
        }

        break;

    default:
        break;
    }

} // end main