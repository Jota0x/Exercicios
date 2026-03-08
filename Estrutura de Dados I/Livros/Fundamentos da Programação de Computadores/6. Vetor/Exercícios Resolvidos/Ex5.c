/*
Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e mostre
os seguintes vetores resultantes:
■ A união de X com Y
(todos os elementos de X e de Y sem repetições).
■ A diferença entre X e Y
(todos os elementos de X que não existam em Y, sem repetições).
■ A soma entre X e Y
(soma de cada elemento de X com o elemento de mesma posição em Y).
■ O produto entre X e Y
(multiplicação de cada elemento de X com o elemento de mesma posição em Y)
■ A intersecção entre X e Y
(apenas os elementos que aparecem nos dois vetores, sem repetições).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10], y[10];

    for (int i = 0; i < 10; i++)
        scanf("%d%d", &x, &y);

    // trata união
    int uniao[20];
    int encontrado = 0;

    for (int i = 0; i < 10; i++)
        uniao[i] = x[i];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
            if (y[i] == uniao[j])
                encontrado = 1;
        if (encontrado == 1)
            uniao[i + 10] = y[i];
    }

    // trata diferenca
    int diferenca[];

    return 0;
} // end main