#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int matricula;
    float nota;

}Aluno;

//protótipo das funções
void menorNota(Aluno *aluno,int N);
void maiorNota(Aluno *aluno,int N);

int main()
{   
    //cria vetor de Aluno
    Aluno *aluno = (Aluno*)malloc(3 * sizeof(Aluno));

    //inicia valores de Alunos
    aluno[0] = (Aluno){"Carlos",100,10};
    aluno[1] = (Aluno){"Bruno",101,9};
    aluno[2] = (Aluno){"Joao",102,7};

    maiorNota(aluno,3);
    menorNota(aluno,3);

    return 0;
}

void menorNota(Aluno *aluno,int N)
{
    int menor = 10;

    //acha menor nota
    for(int i= 0; i < N;i++)
        if(aluno[i].nota < menor)
            menor = aluno[i].nota;

    //imprime informações do aluno com menor nota
    for(int i = 0; i < N;i++)
        if(aluno[i].nota == menor)
        printf("Aluno: %s matricula: %d nota: %.2f\n",aluno[i].nome,aluno[i].matricula,aluno[i].nota);

}

void maiorNota(Aluno *aluno,int N)
{
    int maior = 0;

    //acha maior nota
    for(int i= 0; i < N;i++)
        if(aluno[i].nota > maior)
            maior = aluno[i].nota;

    //imprime informações do aluno com maior nota
    for(int i = 0; i < N;i++)
        if(aluno[i].nota == maior)
        printf("Aluno: %s matricula: %d nota: %.2f\n",aluno[i].nome,aluno[i].matricula,aluno[i].nota);
        
}