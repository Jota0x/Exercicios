#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int topo;
    int *dado;

}Pilha;
//olhar ver 2 turmas avisar pra submeter tp na turma pratica

Pilha* newPilha(int tamanho)
{
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->dado = (int)malloc(tamanho *sizeof(int));

    if(p == NULL || p->dado == NULL)
    {
        printf("Erro de locacao");
        return;
    }
    else

        p->topo = -1;
        return p;
}

void empilhar(Pilha *p,int valor,int max)
{
    if(!isFull(p,max))
    {   
        p->topo++;
        p->dado[p->topo] = valor;
    }
    else
        printf("Pilha cheia\n");
}

void desempilhar(Pilha *p)
{
    if(!isEmpty(p))
    {
        printf("Valor desempilhado: %d\n");
        p->topo--;
    }
    else
        printf("Pilha vazia\n");

}

void mostrar(Pilha *p)
{
    if(!isEmpty(p))
        for(int i = 0; i <= p->topo;i++)
            printf("%d ",p->dado[i]);
    else
        printf("Pilha vazia\n");
}

bool pesquisa(Pilha *p, int valor)
{
    for(int i = 0; i <= p->topo; i++)
        if(p->dado[i] == valor)
            return true;

    return false;

}

void excluirPilha(Pilha *p)
{
    free(p);
}

//verifica pilha vazia 
bool isEmpty(Pilha *p)
{
    if(p->dado == -1)
        return true;
    else
        return false;
}

//verifica pilha cheia
bool isFull(Pilha *p, int max)
{
    if(p->topo == max - 1)
        return true;
    else
        return false;
}

int main()
{
    int tamanho;
    int valor;
    char opcao;

    Pilha *p;

    while(scanf(" %c",&opcao) != EOF)
    {
        if(opcao == 'C')
        {
            scanf("%d",&tamanho);
            p = newPilha(tamanho);
        }
        else if(opcao == 'E')
        {
            scanf("%d",&valor);
            empilhar(p,valor,tamanho);
        }
        else if(opcao == 'D')
        {
            desempilhar(p);
        }
        


    }




}
