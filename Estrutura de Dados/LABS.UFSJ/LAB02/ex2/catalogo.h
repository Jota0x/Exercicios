#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nome[100];
    double preco;
    int quantidade;

} Produto;

typedef struct
{
    Produto produto[100];
    int total;

} Catalogo;

void criarCatalogo(Catalogo *c);
void adicionarProduto(Catalogo *c, char *nome, double preco, int quantidade);
void verificarEstoque(Catalogo *c, char *nome);
void imprimirCatalogo(Catalogo *c);