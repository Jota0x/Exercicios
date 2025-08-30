// Faça um programa que leia três caracteres do tipo char e depois os imprima um
// em cada linha. Use um único comando printf() para isso.
#include <stdio.h>

int main()
{
    char A, B, C;

    scanf("%c %c %c", &A, &B, &C); // le 3 chars

    printf(" %c\n %c\n %c\n", A, B, C); // imprime 3 chars

    return 0;
} // end main