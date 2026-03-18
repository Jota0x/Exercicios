#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int dado;
    No* proximo;

}No;


typedef struct
{   
    No* primeiro;
    No* final;

}Fila;

Fila* criarFila();
void inserir(Fila *f,int valor);
void remover(Fila *f,int posicao);
bool isEmpty(Fila *f);