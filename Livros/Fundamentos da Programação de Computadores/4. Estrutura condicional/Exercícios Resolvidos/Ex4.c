// Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
// digitará três números diferentes.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    // logica caso x maior
    if (x > y && x > z)
    {
        if (y > z)
        {
            printf("%d %d %d", z, y, x);
        }//end if 
        else
            printf("%d %d %d", y, z, x);
    }// end if 

    // logica caso y maior
    if (y > x && y > z)
    {
        if (x > z)
        {
            printf("%d %d %d", z, x, y);
        }// end if
        else
            printf("%d %d %d", x, z, y);
    }// end if 

    // logica caso z maior
    if (z > x && z > y)
    {
        if (x > y)
        {
            printf("%d %d %d", y, x, z);
        }// end if
        else
            printf("%d %d %d", x, y, z);
    }// end if 

    return 0;
} // end main