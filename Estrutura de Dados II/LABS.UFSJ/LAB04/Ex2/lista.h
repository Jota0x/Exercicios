#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int valor;
	No *proximo;

}No;


typedef struct
{
	No *inicio;
	int tamanho

}Lista;

Lista *newLista(int tam);
void inserirInicio(Lista *l, int valor);
void inserirFim(Lista *l, int valor);


