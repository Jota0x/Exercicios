/*
Faça um programa que preencha um vetor com quinze números, determine e mostre:
■■ o maior número e a posição por ele ocupada no vetor;
■■ o menor número e a posição por ele ocupada no vetor.
*/
#include <stdio.h>

int main()
{
    int a[15];

    for (int i = 0; i < 15; i++)
        scanf("%d", &a[i]);

    int menor = a[0];
    int maior = a[0];

    // trata maior e menor
    for (int i = 0; i < 15; i++)
    {
        if (menor > a[i])
            menor = a[i];
        if (maior < a[i])
            maior = a[i];
    }

    // imprime maior e menor
    for (int i = 0; i < 15; i++)
    {
        if (a[i] == menor)
            printf("Menor: %d Posicao: %d", a[i], i);
        if (a[i] == maior)
            printf("Maior: %d Posicao: %d", a[i], i);
    }

    return 0;
} // end main