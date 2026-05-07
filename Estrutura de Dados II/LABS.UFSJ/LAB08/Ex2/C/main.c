#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

int main()
{

    Arvore *minhaArvore = cria_arvore();
    if (minhaArvore == NULL)
    {
        printf("Erro ao criar arvore.\n");
        return 1;
    }

    printf("--- Cadastro de Alunos ---\n");

    Aluno *a1 = cadastrar_aluno("Bruno", 101, 8.5);
    Aluno *a2 = cadastrar_aluno("Ana", 102, 9.0);
    Aluno *a3 = cadastrar_aluno("Beatriz", 103, 7.5);
    Aluno *a4 = cadastrar_aluno("Carlos", 104, 10.0);

    minhaArvore->raiz = inserir(minhaArvore->raiz, a1);
    minhaArvore->raiz = inserir(minhaArvore->raiz, a2);
    minhaArvore->raiz = inserir(minhaArvore->raiz, a3);
    minhaArvore->raiz = inserir(minhaArvore->raiz, a4);

    printf("Alunos inseridos com sucesso!\n\n");

    char letraBusca = 'B';
    printf("Buscando alunos com a letra '%c'...\n", letraBusca);
    No *noEncontrado = buscar_no(minhaArvore->raiz, letraBusca);

    if (noEncontrado != NULL)
    {
        printf("Alunos na lista desta letra:\n");

        // Percorrer a lista dentro do nó para verificar a ordenação
        Celula *atual = noEncontrado->l->inicio;
        while (atual != NULL)
        {
            printf("- Nome: %s | Matrícula: %d | Nota: %.2f\n",
                   atual->aluno->nome, atual->aluno->matricula, atual->aluno->nota);
            atual = atual->prox;
        }
    }
    else
    {
        printf("Nenhum aluno encontrado com a letra '%c'.\n", letraBusca);
    }

    printf("\nBuscando por 'Beatriz'...\n");
    if (noEncontrado != NULL)
    {
        Celula *alunoEspecifico = buscar(noEncontrado->l, "Beatriz");
        if (alunoEspecifico != NULL)
        {
            printf("Sucesso: Beatriz encontrada na lista!\n");
        }
        else
        {
            printf("Erro: Beatriz nao encontrada na lista.\n");
        }
    }

    return 0;
}