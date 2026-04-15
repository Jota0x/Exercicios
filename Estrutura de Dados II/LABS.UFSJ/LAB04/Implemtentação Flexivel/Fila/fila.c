#include "fila.h"

Fila* criarFila()
{
    Fila *f = (Fila*)malloc(sizeof(Fila));

    if(f == NULL)
    {
        printf("Erro de alocação dinamica");
        return;
    }
    else
    {   
        //inicia o inicio e fim 
        f->primeiro = NULL;
        f->final = NULL;
        return f;
    }
}

void inserir(Fila *f,int valor)
{   
    //aloca memoria
    No *novo = (No*)malloc(sizeof(No));

    //verifica erro de alocação
    if(novo == NULL)
    {
        printf("Erro ao alocar memoria");
        return;
    }

    //dado assume valor recebido
    novo->dado = valor;

    //limpa o ponteiro de proximo
    novo->proximo = NULL;

    //caso primeiro esteja vazio aponta para o novo
    if(f->primeiro == NULL)
        f->primeiro = novo;
    else
        //final aponta para o novo
        f->final->proximo = novo;

    //atualiza ponteiro de controle de fila para o novo ultimo
    f->final = novo;

    printf("Inserido %d\n ", valor);
    
}

bool isEmpty(Fila *f)
{
    if(f->primeiro == NULL)
        return true;
    else
        return false;
        
}