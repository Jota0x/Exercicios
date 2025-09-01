/*Faça um programa que mostre as tabuadas dos números de 1 a 10*/
#include <stdio.h>

int main()
{

    // loop principal
    for (int i = 1; i <= 10; i++)
    {
        printf(" \n--- %d --- \n", i);
        for (int j = 0; j <= 10; j++)
        {

            printf("\n%d", i * j);
        } // end for
    } // end for

} // end main