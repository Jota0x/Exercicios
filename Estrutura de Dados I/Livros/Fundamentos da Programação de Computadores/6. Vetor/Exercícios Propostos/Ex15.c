/*
Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito.
*/
#include <stdio.h>

int main()
{
    char *nome[8];
    int dvd[8];
    int gratis;

    // loop para leitura
    for (int i = 0; i < 8; i++)
    {
        nome[i] = (char *)malloc(50 * sizeof(char));
        scanf("%s%d", nome[i], &dvd[i]);
    }

    // loop principal
    for (int i = 0; i < 8; i++)
    {
        gratis = 0;
        if (dvd[i] % 10 == 0)
            gratis++;

        printf("Nome: %s DVD gratis: %d", nome[i], gratis);
    } // end for

    return 0;
} // end main