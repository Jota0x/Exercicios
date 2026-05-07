#ifndef ARVORE_H
#define ARVORE_H

#include "Aluno.h"
#include "Lista.h"

typedef struct No
{
    char letra;
    Lista *l;
    struct No *esquerda;
    struct No *direita;

} No;

typedef struct Arvore
{
    No *raiz;

} Arvore;

Arvore *cria_arvore();
No *cria_no(char letra);
No *inserir(No *raiz, Aluno *a);
No *buscar_no(No *raiz, char letra);

#endif