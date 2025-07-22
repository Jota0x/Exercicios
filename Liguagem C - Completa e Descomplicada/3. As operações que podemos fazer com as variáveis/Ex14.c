// Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
// tabela ASCII para isso.
#include <stdio.h>

int main()
{
    char A;

    scanf("%c",&A);// le char maiusculo

    printf("%c", A + 32);// imprime o char minusculo

    return 0;
}// end main