#include "lista.h"

Lista *newLista()
{
	Lista *l = (Lista*)malloc(sizeof(Lista));

	if(l == NULL)
		return NULL;

	l->inicio = NULL;
	l->tamanho = 0;


	return 0;
}

void adicionarInicio(Lista *l, int valor)
{
	No *no = (No*)malloc(sizeof(No));

	if(no == NULL)
		return NULL;

	no->valor = valor;
	no->proximo = l->inicio;
	l->inicio = no;
	l->tamanho++;
}



