#include <stdio.h>

int main()
{
    // tipos primitivos
    int inteiro = 10;
    float real = 10.00;
    char letra = 'A';

    // ponteiros
    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrLetra = &letra;

    // imprime antes da mudança
    printf("\nInt: %d", inteiro);
    printf("\nFloat: %f", real);
    printf("\nChar: %c\n", letra);

    scanf(" %c%d%f", ptrLetra, ptrInteiro, ptrReal);

    // imprime depois da mudança
    printf("\nInt: %d", *ptrInteiro);
    printf("\nFloat: %f", *ptrReal);
    printf("\nChar: %c", *ptrLetra);

    return 0;
} // end main