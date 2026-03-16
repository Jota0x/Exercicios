#include "fila.h"

Fila* criarFila()
{
    Fila *f = (Fila*)malloc(sizeof(Fila));
    if(f == NULL)
        return -1;
    else
    {   
        //inicia fila 
        f->back = - 1;
        f->front = 0;
        f->quantidade = 0;
    }
    return f;
}

void enfileirar(Fila *f,int n)
{
    if(!isFull(f))
    {
        f->back =(f->back + 1) % MAX;
        f->itens[f->back] = n;
        f->quantidade++;
    }
    else
        printf("Fila cheia");

}

void desinfileirar(Fila *f)
{
    if(!isEmpty)
    {
        printf("Removendo: %d da fila",f->itens[f->front]);
        f->front = (f->front + 1) % MAX;
        f->quantidade--;
    }
    else
        printf("Fila vazia");

}

bool isFull(Fila *f)
{
    if(f->quantidade == MAX - 1)
        return true;
    else
        return false;

}

bool isEmpty(Fila *f)
{
    if(f->quantidade == 0)
        return true;
    else
        return false;

}