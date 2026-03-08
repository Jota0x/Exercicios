// Faça um programa que leia o número de termos, determine e mostre os valores de acordo com a série
// a seguir:
// Série = 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768...
#include <stdio.h>

int main()
{
    int x = 2, y = 7, z = 3;
    int n;

    scanf("%d", &n);

    // imprime os primeiros valores
    printf(" %d ", x);
    printf(" %d ", y);
    printf(" %d ", z);

    for (int i = 0; i < n; i++)
    {
        x *= 2;
        printf(" %d ", x);

        y *= 3;
        printf(" %d ", y);

        z *= 4;
        printf(" %d ", z);
    } // end for

    return 0;
} // end main