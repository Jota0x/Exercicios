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
    No* topo;

}Pilha;

//métodos 
Pilha* criarPilha();
void push(Pilha *p, int x);
void pop(Pilha *p);
bool isEmpty(Pilha *p);