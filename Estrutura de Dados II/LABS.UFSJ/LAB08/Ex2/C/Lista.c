#include "Lista.h"
#include <string.h>

Lista *cria_lista()
{
    Lista *l = (Lista *)malloc(sizeof(Lista));

    if (l == NULL)
        return NULL;

    l->inicio = NULL;
    l->fim = NULL;

    return l;
}

Celula *cria_celula(Aluno *a)
{
    Celula *nova = (Celula *)malloc(sizeof(Celula));

    if (nova == NULL)
        return NULL;

    nova->aluno = a;
    nova->prox = NULL;

    return nova;
}

void adiciona_ordenado(Lista *l, Aluno *a)
{
    if (l == NULL)
        return;

    Celula *nova = cria_celula(a);

    if(nova == NULL)
        return;

    // Trata lista vazia
    if (l->inicio == NULL)
    {
        nova->prox = l->inicio;
        l->inicio = nova;
        l->fim = l->inicio;
        return;
    }

    Celula *aux = l->inicio;

    // loop principal
    // ordena lista
    while (aux->prox != NULL && strcmp(aux->aluno->nome, a->nome) <= 0)
        aux = aux->prox;

    nova->prox = aux->prox;
    aux->prox = nova;
}

void remover(Lista *l, char *nome)
{
    if (l == NULL)
        return;
    if (l->inicio == NULL)
        return;

    Celula *remove = l->inicio;
    Celula *aux = NULL;

    while (remove != NULL &&  strcmp(remove->aluno->nome, nome) != 0)
    {
        aux = remove;
        remove = aux->prox;
    }

    // Nao achou nome
    if (aux == NULL)
        return;

    aux->prox = remove->prox;

    free(remove);
}

Celula *buscar(Lista *l, char *nome)
{
    if(l == NULL)
        return NULL;
    if(l->inicio == NULL)
        return NULL;

    Celula *aux = l->inicio;

    while(aux != NULL && strcmp(aux->aluno->nome,nome) != 0)
        aux = aux->prox;


    return aux;

}


