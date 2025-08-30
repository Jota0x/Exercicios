// Faça um programa que receba três números e mostre o maior.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, maior;

    scanf("%d%d%d", &x, &y, &z);

    if (x > y && x > z)
    {
        maior = x;
        printf("%d", &maior);
    }// end if 
    else if (y > x && y > z)
    {
        maior = y;
        printf("%d", &maior);
    }// end if 
    else if (z > y && z > x)
    {
        maior = z;
        printf("%d", &maior);
    }// end if 

    return 0;

} // end main