#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

typedef struct
{
    int itens[10];
    int n;

}Lista;

Lista* criarFila();
void inserirInicio(Lista *l);
void inserirFIm(Lista *l);
void inserir(Lista *l,int posicao);
int removerInicio(Lista *l);
int removerFinal(Lista *l);
int removerPosicao(Lista *l,int posicao);
void mostrarLista();
bool isFull(Lista *l);
bool isEmpty(Lista *l);