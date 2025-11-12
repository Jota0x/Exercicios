/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
    char endereco[100];

} Pessoa;

Pessoa pessoa;

int main()
{

    scanf("%s%d%s", pessoa.nome, &pessoa.idade, pessoa.endereco);

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
} // end main