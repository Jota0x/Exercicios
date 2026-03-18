#include "pilha.h"

//cria pilha 
Pilha* criarPilha()
{
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));

    if(p != NULL)
        p->topo = -1;

    return p;
}

//empilha valor
void push(Pilha *p,int n)
{
    if(!isFull(p))
    {
        p->topo++;
        p->itens[p->topo] = n;
    }

}

//desempilha
void pop(Pilha *p)
{   
    if(!isEmpty(p))
    {   
        printf("Valor: %d removido",p->itens[p->topo]);
        p->topo--;
    }
    else
        printf("Pilha vazia");
   
}

//verifica topo
void peek(Pilha *p)
{   
    if(!isEmpty(p))
        printf("Topo: %d",p->itens[p->topo]);
    else
        printf("Pilha vazia");
}

//verifica se pilha esta cheia
bool isFull(Pilha *p)
{    
    if(p->topo == MAX - 1)
        return true;
    else
        return false;
}

bool isEmpty(Pilha *p)
{
    if(p->topo == -1)
        return true;
    else
        return false;

}