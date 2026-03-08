#include "catalogo.h"

void criarCatalogo(Catalogo *c)
{
    c->total = 0;
}

void adicionarProduto(Catalogo *c, char *nome, double preco, int quantidade)
{
    if (c->total < 100)
    {
        strcpy(c->produto[c->total].Nome, nome);
        c->produto[c->total].preco = preco;
        c->produto[c->total].quantidade = quantidade;
        c->total++;
    }
    else
        printf("total de produtos atingido");
}

void verificarEstoque(Catalogo *c, char *nome)
{
    int encontrado = 0;
    // encontra
    for (int i = 0; i < c->total; i++)
    {
        if (strcmp(c->produto[i].Nome, nome) == 0)
        {
            if (c->produto[i].quantidade == 0)
                printf("Estoque vazio");
            else
                printf("Quantidade: %d", c->produto[i].quantidade);
            encontrado = 1;
        }
    }

    if (!encontrado)
        printf("Produto nao encontrado");
}

void imprimirCatalogo(Catalogo *c)
{
    for (int i = 0; i < c->total; i++)
    {
        printf("========================================");
        printf("Produto %d: %s", i + 1, c->produto[i].Nome);
        printf("Preco: %f", c->produto[i].preco);
        printf("quantidade: %i\n", c->produto[i].quantidade);
    }
}