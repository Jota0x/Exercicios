#include "arvore.h"

Arvore *cria_arvore()
{
  Arvore *a = (Arvore *)malloc(sizeof(Arvore));

  if (a == NULL)
    return 0;

  a->raiz = NULL;

  return a;
}

No *cria_no(int val)
{
  No *nova = (No *)malloc(sizeof(No));

  if (nova == NULL)
    return NULL;

  nova->dado = val;

  return nova;
}

void inserir_elemento(No *raiz, int elemento)
{
  if (raiz == NULL)
    return cria_no(elemento);

  if (elemento > raiz->dado)
    return inserir_elemento(raiz->dado, elemento);
  else if (elemento < raiz->dado)
    return inserir_elemento(raiz->esquerda, elemento);
}

bool buscar_elemento(No *raiz, int chave)
{
  if (raiz == NULL)
    return false;
  if (raiz->dado == chave)
    return true;

  if (chave > raiz->dado)
    return buscar_elemento(raiz->direita, chave);
  else if (chave < raiz->dado)
    return buscar_elemento(raiz->esquerda, chave);
}

No *min_valor(No *raiz)
{
  if (raiz->esquerda == NULL)
    return raiz;

  return min_valor(raiz->esquerda);
}

remover_elemento(No *raiz, int chave)
{
  if (raiz == NULL)
    return NULL;

  if (chave > raiz->dado)
    return remover_elemento(raiz->direita, chave);
  else if (chave < raiz->dado)
    return remover_elemento(raiz->esquerda, chave);
  else
  {
    // Trata No esquerdo vazio
    if (raiz->esquerda == NULL)
    {
      No *tmp = raiz->direita;
      free(raiz);
      return tmp;
    }
    // Trata No direito vazio
    else if
    {
      (raiz->direita == NULL)
          No *tmp = raiz->esquerda;
      free(raiz);
      return tmp;
    }
    else
    {
      No *tmp = raiz->direita;
      raiz->dado = tmp->dado;
      raiz->direita = remover_elemento(raiz->direita, tmp->data);
    }
  }
}

void ordem(No *raiz)
{
  if (raiz == NULL)
    return;

  ordem(raiz->esquerda);
  printf("%d ", raiz->dado);
  ordem(raiz->direita);
}

void pre_ordem(No *raiz)
{
  if (raiz == NULL)
    return;

  printf("%d ", raiz->dado);
  ordem(raiz->esquerda);
  ordem(raiz->direita);
}

void pos_ordem(No *raiz)
{
  if (raiz == NULL)
    return;

  ordem(raiz->esquerda);
  ordem(raiz->direita);
  printf("%d ", raiz->dado);
}

int quantidade_nos(No *raiz)
{
  if (raiz == NULL)
    return 0;

  return 1 + quantidade_nos(raiz->esquerda) + quantidade_nos(raiz->direita);
}

void destruir_arvore(No *raiz)
{
  if (raiz == NULL)
    return NULL;

  destruir_arvore(raiz->esquerda);
  destruir_arvore(raiz->direita);
  free(raiz);
}
