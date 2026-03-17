#include "lista.h"

Lista* criarLista()
{
    Lista *l = (Lista*)malloc(sizeof(Lista));

    if(l == NULL)
        printf("Erro!\n");
    else
    {
        l->n = 0;
        return l;
    }

}

//Procura valor na Lista
int procurar(Lista *l, int x)
{   

    if(!isEmpty(l))
    {   
        for(int i = 0; i < l->n;i++)
            if(l->itens[i] == x)
                return i;

        return -1;
    }
    else
        printf("Lista Vazia");
}

void inserirOrdenado(Lista *l,int x)
{   
    //caso lista vazia
    if(isEmpty(l))
    {
        l->itens[l->n] = x;
        l->n++;
    }

    if(!isFull(l))
    {

        int posicao = l->itens[l->n - 1];


        while(posicao >= 0 && l->itens[posicao] > x)
        {
            l->itens[posicao + 1] = l->itens[posicao];
            posicao--;
        }

        l->itens[posicao + 1] = x;
        l->n++;

    }
    else    
        printf("Lista Vazia!\n");

}

void remover(Lista *l,int x)
{
    if(!isEmpty(l))
    {
        for(int i = 0; i < l->n;i++)
        {
            if(x == l->itens[i])
            {
                while( i < l->n - 1)
                {
                    l->itens[i] = l->itens[i + 1];
                    i++;
                }
                l->n--;
                return;
            }

        }
    }
    else
        printf("Lista Vazia\n");

}

bool isFull(Lista *l)
{
    if(l->n == MAX - 1)
        return true;
    else
        return false;

}

bool isEmpty(Lista *l)
{
    if(l->n == 0)
        return true;
    else        
        return false;

}