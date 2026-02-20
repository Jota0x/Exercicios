#include <stdio.h>

/*
    Dado um vetor de 10 posições

    | 31 | 16 | 45 | 87 | 37 | 99 | 31 | 43 | 10 | 48 |

    qual algoritmo para encontrar o numero 87?

*/

int main()
{
    int vetor[10] = {31, 16, 45, 87, 37, 99, 31, 43, 10, 48};

    // loop principal
    // caso o item seja encontrado o programa retorna 1 ouy true
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == 87)
            return 1;
    }

    return 0;
} // end main