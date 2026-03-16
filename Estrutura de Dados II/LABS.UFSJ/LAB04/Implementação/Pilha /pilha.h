#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

typedef struct
{
    int topo;              //lista vazia 
    int itens[MAX];

}Pilha;

Pilha* criarPilha();            //cria pilha
void push(Pilha *p,int n);      //empilha
void pop(Pilha *p);             //desempilhar 
void peek(Pilha *p);            //verifica topo
bool isFull(Pilha *p);          //verifica se está cheia 
bool isEmpty(Pilha *p);         //verifica se está vazia