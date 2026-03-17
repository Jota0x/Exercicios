#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

typedef struct
{
    int n;
    int itens[MAX];
}Lista;

Lista* criarLista();
int procurar(Lista *l,int valor);
void inserirOrdenado(Lista *l,int x);
void remover(Lista *l,int x);
bool isFull(Lista *l);
bool isEmpty(Lista *l);


