#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int topo;
    int *tam;
    int *dados;

} Pilha;

Pilha *newPilha(int tam)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));

    if (p == NULL)
        return NULL;

    p->topo = -1;
    p->tam = (int *)malloc(tam * sizeof(int));
    p->dados[tam];

    return p;
}

//preenche pilha 
void preencher(Pilha *p)
{
    for(int i = 0; i < p->tam;i++)
    {
        p->dados[i] = p->tam;
        p->tam--;
    }
}

//remove topo
void pop(Pilha *p)
{   
    printf("%d, ",p->dados[p->topo]);
    p->dados[p->topo--];
}

//troca topo por base
void troca(Pilha *p)
{

    int aux;

    aux = p->dados[0];
    p->dados[0] = p->dados[p->topo];
    p->dados[p->topo] = aux;
}

int main()
{
    int N;

    while (scanf("%d", &N) != 0)
    {
        Pilha *p = newPilha(N);

        while (p->topo > 0)
        {
            pop(p);


            troca(p);
        }

        printf("%d, ")

    }

    return 0;
}