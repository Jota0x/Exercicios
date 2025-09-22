#include <stdio.h>
#include <stdlib.h>

// informações funcionário
typedef struct
{
    char nome[50];
    int idade;
    char sexo;
    int ano;
    float salario;
    int faltas;

} Funcionario;

Funcionario funcionario;

// recupera dados individuais
void nome();
void idade();
void sexo();
void ano();
void salario();
void faltas();
float descontoFaltas();