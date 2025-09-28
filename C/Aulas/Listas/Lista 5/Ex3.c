
#include <stdio.h>

int main()
{

    // Tipos Primitivos
    char varCHAR = 'A';
    int varINT = 12345;
    float varFLOAT = 3.14f;
    double varDOUBLE = 123.456789;

    // Tipos Ponteiros (Ponteiros para Tipos Primitivos)
    // Eles armazenam enderecos de memoria.
    int *ptrINT;       // Ponteiro para INT
    char *ptrCHAR;     // Ponteiro para CHAR
    float *ptrFLOAT;   // Ponteiro para FLOAT
    double *ptrDOUBLE; // Ponteiro para DOUBLE

    // Atribuindo enderecos para os ponteiros
    ptrINT = &varINT;
    ptrCHAR = &varCHAR;
    ptrFLOAT = &varFLOAT;
    ptrDOUBLE = &varDOUBLE;


    printf("--- Analise de Tipos Primitivos ---\n");

    // CHAR
    printf("\nTipo: char\n");
    printf("  Valor: %c\n", varCHAR);
    printf("  Endereco: %p\n", &varCHAR);
    printf("  Tamanho (bytes): %zu\n", sizeof(varCHAR));

    // INT
    printf("\nTipo: int\n");
    printf("  Valor: %d\n", varINT);
    printf("  Endereco: %p\n", &varINT);
    printf("  Tamanho (bytes): %zu\n", sizeof(varINT));

    // FLOAT
    printf("\nTipo: float\n");
    printf("  Valor: %f\n", varFLOAT);
    printf("  Endereco: %p\n", &varFLOAT);
    printf("  Tamanho (bytes): %zu\n", sizeof(varFLOAT));

    // DOUBLE
    printf("\nTipo: double\n");
    printf("  Valor: %lf\n", varDOUBLE);
    printf("  Endereco: %p\n", &varDOUBLE);
    printf("  Tamanho (bytes): %zu\n", sizeof(varDOUBLE));


    printf("\n--- Analise de Tipos Ponteiros (*ptr) ---\n");

    // INT * (Ponteiro para INT)
    printf("\nTipo: int * (Ponteiro para int)\n");
    // O valor do ponteiro e o endereco que ele armazena.
    printf("  Valor (Endereco Apontado): %p\n", ptrINT);
    printf("  Endereco do Ponteiro: %p\n", &ptrINT);
    printf("  Tamanho (bytes): %zu\n", sizeof(ptrINT));

    // CHAR * (Ponteiro para CHAR)
    printf("\nTipo: char * (Ponteiro para char)\n");
    printf("  Valor (Endereco Apontado): %p\n", ptrCHAR);
    printf("  Endereco do Ponteiro: %p\n", &ptrCHAR);
    printf("  Tamanho (bytes): %zu\n", sizeof(ptrCHAR));

    // FLOAT * (Ponteiro para FLOAT)
    printf("\nTipo: float * (Ponteiro para float)\n");
    printf("  Valor (Endereco Apontado): %p\n", varFLOAT);
    printf("  Endereco do Ponteiro: %p\n", &varFLOAT);
    printf("  Tamanho (bytes): %zu\n", sizeof(varFLOAT));

    // DOUBLE * (Ponteiro para DOUBLE)
    printf("\nTipo: double * (Ponteiro para double)\n");
    printf("  Valor (Endereco Apontado): %p\n", ptrDOUBLE);
    printf("  Endereco do Ponteiro: %p\n", &ptrDOUBLE);
    printf("  Tamanho (bytes): %zu\n", sizeof(ptrDOUBLE));

    return 0;
} // end main