#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int *dados;
    int tam;
    int fim;

} Fila;

Fila *newFila(int tam);
void freeFila(Fila *f);
void preenche(Fila *f);
void removeInicio(Fila *f);
void moverProFim(Fila *f);

int main()
{
    int N;
    Fila *f;

    while (scanf("%d", &N) == 1 && N != 0)
    {

        f = newFila(N);

        preenche(f);

        printf("Discarded cards: ");

        while (N > 1)
        {
            removeInicio(f);
            moverProFim(f);
            N--;
        }

        printf("\nRemaining card: %d\n", f->dados[0]);
    }

    freeFila(f);

    return 0;
}

// cria Fila
Fila *newFila(int tam)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));

    if (f == NULL)
        return NULL;

    f->fim = -1;
    f->tam = tam;
    f->dados = (int *)malloc(tam * sizeof(int));

    return f;
}

void freeFila(Fila *f)
{
    free(f->dados);
    free(f);
}

// preenche fila
void preenche(Fila *f)
{
    f->fim = f->tam - 1;

    for (int i = 0; i < f->tam; i++)
        f->dados[i] = i + 1;
}

void removeInicio(Fila *f)
{
    printf("%d, ", f->dados[0]);

    for (int i = 0; i < f->fim; i++)
        f->dados[i] = f->dados[i + 1];

    f->fim--;
}

void moverProFim(Fila *f)
{
    int aux = f->dados[0];

    for (int i = 0; i < f->fim; i++)
        f->dados[i] = f->dados[i + 1];

    f->dados[f->fim] = aux;
}