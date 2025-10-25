#include <stdio.h>
#include <stdlib.h>

// CODIGO 1: Incrementa o CONTEÚDO (valor) apontado por ptr.
int main()
{
    int *ptr, i;

    ptr = (int *)malloc(sizeof(int));

    // Atribui o valor 10 ao conteúdo da memória alocada.
    *ptr = 10;

    for (i = 0; i < 5; i++)
    {
        // Incrementa o conteúdo apontado por ptr.
        //  O valor armazenado na posição de memória é aumentado em 1 a cada iteração.
        //  O endereço permanece o mesmo.
        *ptr = *ptr + 1;
    }

    // O valor será 10 + 5 = 15.
    printf("\nptr: %d\n", *ptr);

    // Libera a memória alocada
    free(ptr);

    return 0;
}

// CODIGO 2: Incrementa o PONTEIRO (endereço) armazenado em ptr.
int main()
{
    int *ptr, i;

    ptr = (int *)malloc(sizeof(int));

    // Atribui o valor 10 ao conteúdo da memória alocada.
    *ptr = 10;

    for (i = 0; i < 5; i++)
    {
        // Incrementa o ponteiro ptr.
        // O endereço armazenado em 'ptr' é movido 1 posição de 'int' à frente a cada iteração.
        // O  valor 10 na posição inicial permanece inalterado.
        ptr = ptr + 1;
    }

    // O valor impresso será o endereço inicial + (5 * sizeof(int)).
    // Não é possível imprimir o valor 10, pois 'ptr' não aponta mais para ele.
    printf("\nptr: %p\n", ptr);

    //Erro no free, o programa está tentando liberar um endereço que não é o endereço inicial
    //devido o incremento na posição da memória pelo loop
    free(ptr);

    return 0;
}