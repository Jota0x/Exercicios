#include <stdio.h>
#include <stdlib.h>
#define total 40

typedef struct
{
    char *nome;
    int dia;
    int mes;

} Dados;

int main()
{
    Dados pessoas[total];

    for (int i = 0; i < total; i++)
        pessoas[i].nome = (char *)malloc(100 * sizeof(char));

    for (int i = 0; i < total; i++)
        scanf("%s%d%d", pessoas[i].nome, &pessoas[i].dia, &pessoas[i].mes);

    for (int i = 1; i <= 12; i++)
    {
        printf("Aniversariante do mes : %d\n", i);
        for (int j = 0; j < total; j++)
        {
            if (pessoas[j].mes == i)
                printf("%s,%d,%d\n", pessoas[j].nome, pessoas[j].dia, pessoas[j].mes);
        }
    }

    for (int i = 0; i < total; i++)
        free(pessoas[i].nome);

    return 0;

} // end main