#include <stdio.h>
#include <stdlib.h>
#define total 15

typedef struct
{
    char *nome;
    char *telefone;
    float preco;
} Loja;

Loja loja[total];

int main()
{
    float media = 0;

    for (int i = 0; i < total; i++)
        loja[i].telefone = (char *)malloc(100 * sizeof(char));

    for (int i = 0; i < total; i++)
        loja[i].nome = (char *)malloc(100 * sizeof(char));

    for (int i = 0; i < total; i++)
        scanf("%s%s%f", loja[i].nome, loja[i].telefone, &loja[i].preco);

    for (int i = 0; i < total; i++)
        media += loja[i].preco;

    media = media / total;

    printf("Media %.2f", media);
    printf("Lojas com preço abaixo da media: ");
    for (int i = 0; i < total; i++)
        if (loja[i].preco < media)
        {
            printf("Nome: %s", loja[i].nome);
            printf("Telefone: %s", loja[i].telefone);
        }

    for (int i = 0; i < total; i++)
        free(loja[i].telefone);

    for (int i = 0; i < total; i++)
        free(loja[i].nome);

    return 0;
} // end main