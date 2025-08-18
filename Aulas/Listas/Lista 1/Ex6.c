#include <stdio.h>

int main()
{
    // declaração variáveis
    float a, x, b, raiz;

    // Le numeros
    scanf("%f%f", &a, &b);

    //calculo da raiz
    raiz = -b/a;

    //escreve raiz
    printf("%.2f",raiz);

    return 0;
} // end main