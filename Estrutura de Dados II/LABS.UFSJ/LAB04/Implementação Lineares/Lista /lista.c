#include "lista.h"

//cria Lista
Lista* criarLista()
{
    Lista *l = (Lista*)malloc(sizeof(Lista));

    if(l == NULL)
        printf("ERRO!\n");
    else
    {
        l->n = 0; //controle da lista
    }
        return l;

}

void inserirInicio(Lista *l,int x)
{
    if(!isFull(l))
    {
        for(int i = l->n; i > 0; i--)
            l->itens[i] = l->itens[i - 1];

        
        l->itens[0] = x;
        l->n++;

    }
    else  
        printf("Lista Cheia!\n");

}

void inserirFim(Lista *l,int x)
{
    if(!isFull(l))
    {
        l->itens[l->n] = x;
        l->n++;
    }
    else
        printf("Lista Cheia!\n");
}

void inserirPosicao(Lista *l,int posicao,int x)
{
    if(!isFull(l) && posicao >= 0 && posicao <= l->n)
    {   
        for(int i = l->n; i > posicao;i--)
        {
            l->itens[i]  = l->itens[i - 1];     
        }

        l->itens[posicao] = x;
        l->n++;

    }
    else
        printf("Lista Cheia! \n");
}

int removerInicio(Lista *l)
{   
    if(!isEmpty(l))
    {
        int removido = l->itens[0];
        l->n--;

        //organiza fila 
        for(int i = 0; i < l->n;i++)
            l->itens[i] = l->itens[i + 1];

    
        return removido;
        
    }
    else    
        printf("Lista vazia!\n");

}

int removerFim(Lista *l)
{
    if(!isEmpty(l))
    {   
        int removido = l->itens[l->n - 1];
        l->n--;

        return removido;

    }
    else
        printf("Lista Vazia!\n");
}

int removerPosicao(Lista *l,int posicao)
{
    if(!isEmpty && posicao <= l->n && posicao >= 0)
    {   
        int removido = l->itens[posicao];
        l->n--;

        //organiza lista 
        for(int i = posicao; i < l->n;i++)
            l->itens[i] = l->itens[i + 1];
            
        return removido;

    }
    else
        printf("Lista Vazia!\n");

}

void mostrarLista(Lista *l)
{
    if(!isEmpty(l))
    {
        for(int i = 0; i < l->n;i++)
            printf("%d ",l->itens[i]);

    }
    else
        printf("Lista Vazia! \n");



}



//verifica lista cheia 
bool isFull(Lista *l)
{
    if(l->n >= MAX)
        return true;
    else
        return false;

}

//verifica lista vazia
bool isEmpty(Lista *l)
{
    if(l->n == 0)
        return true;
    else
        return false;

}

