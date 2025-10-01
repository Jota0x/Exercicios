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
    printf("\nInt: %d", *ptrInteiro);
    printf("\nEndereco: %p", &ptrInteiro);
    printf("\nFloat: %f", *ptrReal);
    printf("\nEndereco: %p", &ptrReal);
    printf("\nChar: %c\n", *ptrLetra);
    printf("\nChar: %p\n", &ptrLetra);

    scanf(" %c%d%f", ptrLetra, ptrInteiro, ptrReal);

    // imprime depois da mudança
    printf("\nInt: %d", *ptrInteiro);
    printf("\nEndereco: %p", &ptrInteiro);
    printf("\nFloat: %f", *ptrReal);
    printf("\nEndereco: %p", &ptrReal);
    printf("\nChar: %c\n", *ptrLetra);
    printf("\nChar: %p\n", &ptrLetra);

    return 0;
} // end main