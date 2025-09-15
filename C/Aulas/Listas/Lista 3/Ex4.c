#include <stdio.h>


// prototipo funçao
void verificaTriangulo(float a, float b, float c);

int main()
{
    float a, b, c;

    // le lados
    scanf("%f%f%f", &a, &b, &c);

    while (a >= 0 || b >= 0 || c >= 0)
    {
        // verifica triangulo
        verificaTriangulo(a, b, c);

        // le lados
        scanf("%f%f%f", &a, &b, &c);
    }

    return 0;
} // end main

// verificaTriangulo
void verificaTriangulo(float a, float b, float c)
{
    

    // verifica triangulo
    if (a < (b + c) && b < (a + c) && c < (a + b))
    {

        // trata tipo de triangulo

        if (a == b && a == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        } // end if
        else if (a == b || a == c || b == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        } // end else if
        else
            printf("TRIANGULO ESCALENO\n");

    } // end if

    else
        printf("NAO TRIANGULO\n");

} // end verificaTriangulo