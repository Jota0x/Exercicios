#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int final;
    int *dados;
    int tam;

} Fila;

Fila *newFila(int tam);
void freeFila(Fila *f);
void preencher(Fila *f, int valor);
int troca(Fila *f);

int main()
{
    int N;
    Fila *f;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int M;
        scanf("%d", &M);

        Fila *f = newFila(M);

        for (int i = 0; i < M; i++)
            scanf("%d", &f->dados[i]);

        printf("%d\n", troca(f));

        freeFila(f);
    }

    return 0;
}

Fila *newFila(int tam)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));

    if (f == NULL)
        return NULL;

    f->final = -1;
    f->tam = tam;
    f->dados = (int *)malloc(tam * sizeof(int));

    return f;
}

void freeFila(Fila *f)
{
    free(f->dados);
    free(f);
}

void preencher(Fila *f, int valor)
{
    f->final++;
    f->dados[f->final] = valor;
}

int troca(Fila *f)
{
    int troca = 0;

    for (int i = 0; i < f->tam - 1; i++)
        if (f->dados[i] < f->dados[i + 1])
        {
            int aux = f->dados[i];
            f->dados[i] = f->dados[i + 1];
            f->dados[i + 1] = aux;
            troca += 2;
        }

    return f->tam - troca;
}