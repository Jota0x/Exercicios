// Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
// do usuário.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, media, maior, menor, diferenca, produto = 0, divisao = 0;
    int opcao;

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        scanf("%d%d", &x, &y);

        media = (x + y) / 2;

        printf("%f", media);

        break;
    case 2:
        if (x > y)
        {
            menor = y;
            maior = x;
        }
        else if (y > x)
        {
            menor = x;
            maior = y;
        }
        else
            printf("Numeros iguais");

        diferenca = maior - menor;

        printf("%f", diferenca);

        break;
    case 3:

        produto = x * y;

        printf("%f", produto);

        break;

    case 4:

        divisao = x / y;

        printf("%f", divisao);

        break;

    default:
        printf("Opcao invalida!");
        break;
    }

} // end main