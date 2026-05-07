    #ifndef  LISTA_H
    #define LISTA_H

    #include "Aluno.h"
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Celula
    {

        Aluno *aluno;
        struct Celula *prox;

    } Celula;

    typedef struct Lista
    {
        Celula *inicio;
        Celula *fim;

    } Lista;

    // Metodos da lista
    Lista *cria_lista();
    Celula *cria_celula(Aluno *a);
    void adiciona_ordenado(Lista *l, Aluno *a);
    void remover(Lista *l, char *nome);
    Celula *buscar(Lista *l,char *nome);

    #endif