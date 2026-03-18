#include "pilha.h"

Pilha* criarPilha()
{
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));

    if(p == NULL)
        printf("ERRO!");
    else
        return p;

}

void push(Pilha* p, int x)
{
    No* novo = (No*)malloc(sizeof(No));

    //trata erro de alocação
    if(novo == NULL)
    {
        printf("Erro na alocação");
        return;
    }
    

    //novo nó assume o valor de x
    novo->dado = x;

    //proximo assume valor do topo
    novo->proximo = p->topo;

    //ponteiro de controle assume o valor do novo nó
    p->topo = novo;

}

void pop(Pilha *p)
{

    if(!isEmpty(p))
    {   
        //variavel auxiliar segura endereço do topo atual
        No* temp = p->topo;

        //variavel segura valor do dado
        int valor = temp->dado;

        //pilha começa pelo segundo nó
        p->topo = p->topo->proximo;

        //liberia memoria
        free(temp);

        return valor;
    }
    else 
        printf("Pilha vazia");
}

//verifica pilha vazia 
bool isEmpty(Pilha *p)
{
   if(p == NULL)
        return true;
    else 
        return false;
}