/*
Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■■ a quantidade de produtos com preço inferior a R$ 50,00;
■■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
■■ a média dos preços dos produtos com preço superior a R$ 100,00.
*/
#include <stdio.h>

int main()
{
    char *nome[5];
    float preco[5], media = 0;
    int inferior = 0;

    for (int i = 0; i < 5; i++)
    {
        nome[i] = (char *)malloc(50 * sizeof(char));
        scanf("%s%f", nome[i], &preco[i]);
    }

    // variavel de controle para media
    int aux = 0;

    // loop principal
    for (int i = 0; i < 5; i++)
    {
        if (preco[i] < 50)
            inferior++;
        else if (preco[i] > 50 && preco[i] < 100)
        {
            printf("\n%s", nome[i]);
        }
        else
        {
            media += preco[i];
            aux++;
        }
    } // end for

    // imprime calculos
    printf("Inferior a 50: %d", inferior);
    printf("\nMedia: %.2f", (media / aux));

    return 0;
} // end main