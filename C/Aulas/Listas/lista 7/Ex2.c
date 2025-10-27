#include <stdio.h>

void temperatura(int dias[]);

int main()
{
    int *dias = malloc(31 * sizeof(int));

    temperatura(dias);

    free(dias);

    return 0;
} // end main

void temperatura(int dias[])
{
    int contador = 0;
    float media = 0;

    for (int i = 0; i < 31; i++)
        scanf("%d", &dias[i]);

    for (int i = 0; i < 31; i++)
        media += dias[i];

    media = media / 31;
    int maior = dias[0];
    int menor = dias[0];

    for (int i = 0; i < 31; i++)
    {
        if (dias[i] < media)
            contador++;
        if (dias[i] > maior)
            maior = dias[i];
        if (dias[i] < menor)
            menor = dias[i];
    }

    printf("Menor e maior temperatura: %d e %d\n", menor, maior);
    printf("Media de temperatura: %.2f\n", media);
    printf("Numero de dias nos quais a temperatura foi inferior a temperatura media: %d", contador);

} // end temperatura