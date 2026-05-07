#include "Arvore.h"

Arvore *cria_arvore()
{
    Arvore *a = (Arvore *)malloc(sizeof(Arvore));

    if (a == NULL)
        return NULL;

    a->raiz = NULL;

    return a;
}

No *cria_no(char letra)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
        return NULL;

    novo->letra = letra;
    novo->l = cria_lista();

    return novo;
}

No *inserir(No *raiz, Aluno *a)
{
    if (raiz == NULL)
        return cria_no(a->nome[0]);

    // Inserir na Lista
    if (a->nome[0] == raiz->letra)
        adiciona_ordenado(raiz->l, a);

    if (a->nome[0] > raiz->letra)
        raiz->direita = inserir(raiz->direita, a);
    else
        raiz->esquerda = inserir(raiz->esquerda, a);

    return raiz;
}

No *buscar_no(No *raiz, char letra)
{
    if (raiz == NULL || raiz->letra == letra)
        return raiz;

    if (letra > raiz->letra)
        return buscar_no(raiz->direita, letra);
    else
        return buscar_no(raiz->esquerda, letra);
}
