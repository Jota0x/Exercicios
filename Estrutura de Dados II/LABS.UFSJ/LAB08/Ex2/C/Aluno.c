#include "Aluno.h"

Aluno *cadastrar_aluno(char *nome, int matricula, double nota)
{
    Aluno *a = (Aluno *)malloc(sizeof(Aluno));

    if (a == NULL)
        return NULL;

    a->nome = nome;
    a->matricula = matricula;
    a->nota = nota;

    return a;
} 