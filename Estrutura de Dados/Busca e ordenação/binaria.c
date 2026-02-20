#include <stdio.h>
#include <stdbool.h>

/*
    Dado um vetor de 10 posições

    | 31 | 16 | 45 | 87 | 37 | 99 | 31 | 43 | 10 | 48 |

    qual algoritmo para encontrar o numero 87?

*/

int main()
{
    int vetor[10] = {31, 16, 45, 87, 37, 99, 31, 43, 10, 48};
    int aux; // varialvel auxiliar para ordenação

    // em caso de pesquisa binario o vetor precisa estar ordenado
    // loop para ordenação
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[j] < vetor[i])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    // vetor ordenado
    for (int i = 0; i < 10; i++)
        printf(" %d ", vetor[i]);
    printf("\n");

    int inicio = 0,
        meio,
        final = 10 - 1,
        alvo = 87; // tamanho do vetor - 1

    bool encontrado = false;

    while (inicio <= final && !encontrado)
    {
        meio = (final + inicio) / 2;

        if (vetor[meio] > alvo)
            final = meio - 1;
        else if (vetor[meio] < alvo)
            inicio = meio + 1;
        else if (vetor[meio] == alvo)
            encontrado = true;
    }

    if (encontrado == true)
        printf("Alvo %d encontrado!", alvo);
    else
        printf("Alvo nao encontrado :(");

    return 0;
}