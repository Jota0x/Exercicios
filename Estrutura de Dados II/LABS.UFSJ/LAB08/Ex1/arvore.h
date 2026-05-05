#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct No
{
  int dado;
  struct No *esquerda;
  struct No *direita;

}No;

typedef struct Arvore
{
  No *raiz;
}Arvore;

Arvore *cria_arvore();
No* cria_no(int val);
void inserir_elemento(No *raiz, int elemento);
bool buscar_elemento(No *raiz, int chave);
void remover_elemento(No *raiz, int chave);
void ordem(No *raiz);
void pre_ordem(No *raiz);
void pos_ordem(No *raiz);
int quantidade_nos(No *raiz);
void destruir_arvore(No *raiz);
