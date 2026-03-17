#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

typedef struct
{
    int front;
    int back;
    int quantidade;
    int itens[MAX];

}Fila;

Fila* criarFila();
void enfileirar(Fila *f,int n);
void desinfileirar(Fila *f);
bool isEmpty(Fila *f);
bool isFull(Fila *f);

